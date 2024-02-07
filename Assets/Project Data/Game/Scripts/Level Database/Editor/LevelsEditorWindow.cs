#pragma warning disable 649, 168

using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;
using System.Text.RegularExpressions;

namespace Watermelon
{
    public class LevelsEditorWindow : LevelEditorBase
    {
        //temp variables or variables that used in different tabs
        private TabHandler tabHandler;
        private const string ELEMENTS_TAB_LABEL = "Field elements";
        private const string LEVELS_TAB_LABEL = "Levels";
        private const string TEXTURES_TAB_LABEL = "Textures";
        private LevelRepresentation selectedLevelRepresentation;
        private Rect tempTextureRect;
        private Event currentEvent;
        private Rect textureRect;
        private SerializedProperty horizontalOffsetSerializedProperty;
        private SerializedProperty verticalOffsetSerializedProperty;
        private SerializedProperty sizeSerializedProperty;
        private SerializedProperty textureSerializedProperty;

        //level database
        private const string LEVELS_PROPERTY_NAME = "levels";
        private const string MOVABLE_OBJECTS_PROPERTY_NAME = "movableObjects";
        private const string OBSTACLES_PROPERTY_NAME = "obstacles";
        private const string PLACEHOLDER_TEXTURE_PROPERTY_NAME = "placeholderTexture";
        private const string GREEN_TEXTURE_PROPERTY_NAME = "greenTexture";
        private const string RED_TEXTURE_PROPERTY_NAME = "redTexture";
        private const string ITEM_BACKGROUND_TEXTURE_PROPERTY_NAME = "itemBackgroundTexture";
        private SerializedProperty levelsSerializedProperty;
        private SerializedProperty obstaclesSerializedProperty;
        private SerializedProperty movableObjectsSerializedProperty;
        private SerializedProperty placeholderTextureProperty;
        private SerializedProperty greenTextureProperty;
        private SerializedProperty redTextureProperty;
        private SerializedProperty itemBackgroundTextureTextureProperty;
        private Texture2D placeholderTexture;
        private Texture2D greenTexture;
        private Texture2D redTexture;
        private Texture2D itemBackgroundTexture;

        //field element
        private const string FIELD_ELEMENT_PROPERTY_NAME = "fieldElement";
        private const string TEXTURE_PROPERTY_NAME = "texture";
        private const string HORIZIONTAL_OFFSET_PROPERTY_NAME = "horizontalOffset";
        private const string VERTICAL_OFFSET_PROPERTY_NAME = "verticalOffset";
        private const string SIZE_PROPERTY_NAME = "size";
        private const string FIELD_ELEMENT_LABEL = "Field element:";


        //Elements tab variables
        private const string MOVABLE_OBJECTS_FOLDER_NAME = "Movable Objects";
        private const string OBSTACLE_FOLDER_NAME = "Obstacles";
        private const string ASSET_SUFFIX = ".asset";
        private const string FILENAME_REGEX_PATTERN = "^[a-zA-Z0-9_ ]+$";
        private const string FILENAME_INCORRECT_ERROR = "Filename don`t match regex pattern: ";
        private const string FILE_ALREADY_EXIST_ERROR = "File with this name already exist.";
        private const string CREATE_OBJECT_LABEL = "Create new object";
        private const string NEW_OBJECT_LABEL = "New object filename";
        private const string OBSTACLES_LABEL = "Obstacles";
        private const string MOVABLE_OBJECTS_LABEL = "Movable objects";
        private const float START_OFFSET = 10;
        private const float LINE_WIDTH = 2f;
        private const int SPRITE_ELEMENT_SIZE = 24;
        private const string DELETE_LABEL = "Delete";
        private const string SOURSE_SCRIPT_PROPERTY_NAME = "m_Script";
        private const string ELEMENTS_TAB_INSTRUCTION = "You can open elements for editing by clicking on them.";
        private const string DEFAULT_NEW_OBSTACLE_NAME = "Obstacle_0x0";
        private const string DEFAULT_NEW_MOVABLE_OBJECT_NAME = "Movable object_0x0";
        private string newObstacleName = DEFAULT_NEW_OBSTACLE_NAME;
        private string newMovableObjectName = DEFAULT_NEW_MOVABLE_OBJECT_NAME;
        private Regex fileNameRegex;
        private int selectedObstacleIndex = -1;
        private int selectedMovableObjectIndex = -1;
        private SerializedObject selectedObstacleSerializedObject;
        private SerializedObject selectedMovableObjectSerializedObject;
        private Rect clickRect;
        private Texture2D texture;
        private Rect textureFieldRect;
        private Type texture2DType;

        private string ENEMY_FOLDER_PATH { get => LEVELS_DATABASE_FOLDER_PATH + PATH_SEPARATOR + MOVABLE_OBJECTS_FOLDER_NAME; }
        private string OBSTACLE_FOLDER_PATH { get => LEVELS_DATABASE_FOLDER_PATH + PATH_SEPARATOR + OBSTACLE_FOLDER_NAME; }

        //levels tab
        private const string ERROR = "Error";
        private const string OK = "OK";
        private const int SIDEBAR_WIDTH = 160;
        private const string PALETTE_CELL_SIZE = "paletteCellSize";
        private const string LEVEL_CELL_SIZE = "levelCellSize";
        private const string LINE_SEPARATOR = ".\n";
        private const string ELEMENT_SEPARATOR = ", ";
        private const string NULL_OBJECT = "null object";
        private const string DEFAULT_TEXTURES_MISSING = "Default textures missing: ";
        private const string OBSTACLE_TEXTURES_MISSING = "Obstacle textures missing in: ";
        private const string MOVABLE_OBJECTS_TEXTURES_MISSING = "Movable objects textures missing in: ";
        private FieldElement[] movableObjectsCached;
        private FieldElement[] obstaclesCached;
        private int levelCellSize;
        private int paletteCellSize;
        private Rect groupRect;
        private float startPosX;
        private float startPosY;
        private float maxHeight;
        private LevelsHandler levelsHandler;
        private Vector2 firstRotatingPoint;
        private Vector2 secondRotatingPoint;
        private float levelGridPositionX;
        private float levelGridPositionY;
        private Vector2Int draggetItemUIGridPosition;
        private Vector2 rectPosition;
        private Vector2 itemPosition;
        private Vector2 levelScrollVector;
        private Rect pageRect;
        private Rect fullRect;
        private Rect texturePointRect;
        private Matrix4x4 matrixBackup;

        //drag
        private bool itemIsDragged;
        private int draggedItemLevelIndex;
        private int draggedItemCachedIndex;
        private int draggetItemAngle;
        private DraggetItemType draggetItemType;
        private bool draggetItemSnapActive;
        private bool draggetItemDropAcceptable;
        private List<Vector2Int> filledGridCells;
        private List<Vector2Int> draggetItemGridCells;

        protected override WindowConfiguration SetUpWindowConfiguration(WindowConfiguration.Builder builder)
        {
            return builder.SetWindowMinSize(new Vector2(600, 300)).Build();
        }

        protected override Type GetLevelsDatabaseType()
        {
            return typeof(LevelDatabase);
        }

        public override Type GetLevelType()
        {
            return typeof(Level);
        }

        protected override void ReadLevelDatabaseFields()
        {
            levelsSerializedProperty = levelsDatabaseSerializedObject.FindProperty(LEVELS_PROPERTY_NAME);
            obstaclesSerializedProperty = levelsDatabaseSerializedObject.FindProperty(OBSTACLES_PROPERTY_NAME);
            movableObjectsSerializedProperty = levelsDatabaseSerializedObject.FindProperty(MOVABLE_OBJECTS_PROPERTY_NAME);

            //TextureProperties
            placeholderTextureProperty = levelsDatabaseSerializedObject.FindProperty(PLACEHOLDER_TEXTURE_PROPERTY_NAME);
            greenTextureProperty = levelsDatabaseSerializedObject.FindProperty(GREEN_TEXTURE_PROPERTY_NAME);
            redTextureProperty = levelsDatabaseSerializedObject.FindProperty(RED_TEXTURE_PROPERTY_NAME);
            itemBackgroundTextureTextureProperty = levelsDatabaseSerializedObject.FindProperty(ITEM_BACKGROUND_TEXTURE_PROPERTY_NAME);

            //Textures
            placeholderTexture = (Texture2D)placeholderTextureProperty.objectReferenceValue;
            greenTexture = (Texture2D)greenTextureProperty.objectReferenceValue;
            redTexture = (Texture2D)redTextureProperty.objectReferenceValue;
            itemBackgroundTexture = (Texture2D)itemBackgroundTextureTextureProperty.objectReferenceValue;
        }

        protected override void InitialiseVariables()
        {
            CreateFolderIfNotExist(ENEMY_FOLDER_PATH);
            CreateFolderIfNotExist(OBSTACLE_FOLDER_PATH);
            tabHandler = new TabHandler();
            tabHandler.AddTab(new TabHandler.Tab(ELEMENTS_TAB_LABEL, DrawFieldElementsTab));
            tabHandler.AddTab(new TabHandler.Tab(LEVELS_TAB_LABEL, DrawLevelsTab, OnOpenLevelsTab));
            tabHandler.AddTab(new TabHandler.Tab(TEXTURES_TAB_LABEL, DrawTexturesTab));
            fileNameRegex = new Regex(FILENAME_REGEX_PATTERN, RegexOptions.Singleline);
            texture2DType = typeof(Texture2D);
            paletteCellSize = SPRITE_ELEMENT_SIZE;
            levelCellSize = SPRITE_ELEMENT_SIZE;
            filledGridCells = new List<Vector2Int>();
            draggetItemGridCells = new List<Vector2Int>();
            levelsHandler = new LevelsHandler(levelsDatabaseSerializedObject, levelsSerializedProperty);
        }

        protected override void Styles()
        {
            base.Styles();

            if (tabHandler != null)
            {
                tabHandler.SetDefaultToolbarStyle();
            }
        }

        public override void OpenLevel(UnityEngine.Object levelObject, int index)
        {
            selectedLevelRepresentation = new LevelRepresentation(levelObject);
        }

        public override string GetLevelLabel(UnityEngine.Object levelObject, int index)
        {
            return new LevelRepresentation(levelObject).GetLevelLabel(index, stringBuilder);
        }

        public override void ClearLevel(UnityEngine.Object levelObject)
        {
            new LevelRepresentation(levelObject).Clear();
        }

        protected override void DrawContent()
        {
            tabHandler.toolBarDisabled = itemIsDragged;
            tabHandler.DisplayTab();
            HandleDragOfLevelItem();
        }

        #region tab1
        private void DrawFieldElementsTab()
        {
            //handle obstacles
            EditorGUILayout.LabelField(OBSTACLES_LABEL);
            newObstacleName = EditorGUILayout.TextField(NEW_OBJECT_LABEL, newObstacleName);
            DrawCreateObjectButton(newObstacleName, typeof(Obstacle), obstaclesSerializedProperty, OBSTACLE_FOLDER_PATH + PATH_SEPARATOR + newObstacleName + ASSET_SUFFIX);
            HandleObstaclesList();

            //handle enemies
            EditorGUILayout.LabelField(MOVABLE_OBJECTS_LABEL);
            newMovableObjectName = EditorGUILayout.TextField(NEW_OBJECT_LABEL, newMovableObjectName);
            DrawCreateObjectButton(newMovableObjectName, typeof(MovableObject), movableObjectsSerializedProperty, ENEMY_FOLDER_PATH + PATH_SEPARATOR + newMovableObjectName + ASSET_SUFFIX);
            HandleMovableObstaclesList();

            EditorGUILayout.Space();
            EditorGUILayout.HelpBox(ELEMENTS_TAB_INSTRUCTION, MessageType.Info);
        }

        private void DrawCreateObjectButton(string objectNameVariable, System.Type fileType, SerializedProperty arrayProperty, string filePath)
        {
            if (fileNameRegex.IsMatch(objectNameVariable) && (!System.IO.File.Exists(GetProjectPath() + filePath)))
            {
                if (GUILayout.Button(CREATE_OBJECT_LABEL, EditorStylesExtended.button_01))
                {
                    CreateAsset(fileType, arrayProperty, filePath);
                }
            }
            else
            {
                if (!fileNameRegex.IsMatch(objectNameVariable))
                {
                    BeginDisabledGroup(true);
                    GUILayout.Button(CREATE_OBJECT_LABEL, EditorStylesExtended.button_01);
                    EndDisabledGroup();
                    EditorGUILayout.HelpBox(FILENAME_INCORRECT_ERROR + FILENAME_REGEX_PATTERN, MessageType.Error);
                }
                else
                {
                    BeginDisabledGroup(true);
                    GUILayout.Button(CREATE_OBJECT_LABEL, EditorStylesExtended.button_01);
                    EndDisabledGroup();
                    EditorGUILayout.HelpBox(FILE_ALREADY_EXIST_ERROR, MessageType.Error);
                }
            }
        }

        private void CreateAsset(Type fileType, SerializedProperty arrayProperty, string filePath)
        {
            ScriptableObject newFile = ScriptableObject.CreateInstance(fileType);
            AssetDatabase.CreateAsset(newFile, filePath);
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();

            arrayProperty.arraySize++;
            arrayProperty.GetArrayElementAtIndex(arrayProperty.arraySize - 1).objectReferenceValue = newFile;

            
            if(fileType == typeof(Obstacle))
            {
                newObstacleName = DEFAULT_NEW_OBSTACLE_NAME;
            }
            else
            {
                newMovableObjectName = DEFAULT_NEW_MOVABLE_OBJECT_NAME;
            }
        }

        private void HandleObstaclesList()
        {
            for (int i = 0; i < obstaclesSerializedProperty.arraySize; i++)
            {
                clickRect = EditorGUILayout.BeginVertical();

                if (i == selectedObstacleIndex)
                {
                    DisplaySelectedObject(selectedObstacleSerializedObject, i, obstaclesSerializedProperty);
                }
                else
                {
                    DisplayUnselectedObject(i, obstaclesSerializedProperty);
                }

                EditorGUILayout.EndVertical();

                if (GUI.Button(clickRect, GUIContent.none, GUIStyle.none))
                {
                    selectedMovableObjectIndex = -1;

                    if (selectedObstacleIndex == i)
                    {
                        selectedObstacleIndex = -1;
                    }
                    else
                    {
                        if (obstaclesSerializedProperty.GetArrayElementAtIndex(i).objectReferenceValue != null)
                        {
                            selectedObstacleIndex = i;
                            selectedObstacleSerializedObject = new SerializedObject((ScriptableObject)obstaclesSerializedProperty.GetArrayElementAtIndex(i).objectReferenceValue);
                        }
                    }
                }

            }
        }

        private void HandleMovableObstaclesList()
        {
            for (int i = 0; i < movableObjectsSerializedProperty.arraySize; i++)
            {
                clickRect = EditorGUILayout.BeginVertical();

                if (i == selectedMovableObjectIndex)
                {
                    DisplaySelectedObject(selectedMovableObjectSerializedObject, i, movableObjectsSerializedProperty);
                }
                else
                {
                    DisplayUnselectedObject(i, movableObjectsSerializedProperty);
                }

                EditorGUILayout.EndVertical();

                if (GUI.Button(clickRect, GUIContent.none, GUIStyle.none))
                {
                    selectedObstacleIndex = -1;

                    if (selectedMovableObjectIndex == i)
                    {
                        selectedMovableObjectIndex = -1;
                    }
                    else
                    {
                        if (movableObjectsSerializedProperty.GetArrayElementAtIndex(i).objectReferenceValue != null)
                        {
                            selectedMovableObjectIndex = i;
                            selectedMovableObjectSerializedObject = new SerializedObject((ScriptableObject)movableObjectsSerializedProperty.GetArrayElementAtIndex(i).objectReferenceValue);
                        }
                    }
                }

            }
        }

        private void DisplaySelectedObject(SerializedObject serializedObject, int index, SerializedProperty arrayProperty)
        {
            EditorGUILayout.BeginVertical(GUI.skin.box);
            EditorGUILayout.PropertyField(arrayProperty.GetArrayElementAtIndex(index));
            SerializedProperty iterator = serializedObject.GetIterator();
            iterator.NextVisible(true);

            do
            {
                if ((!iterator.name.Equals(FIELD_ELEMENT_PROPERTY_NAME)) && (!iterator.name.Equals(SOURSE_SCRIPT_PROPERTY_NAME)))
                {
                    EditorGUILayout.PropertyField(iterator);
                }

            } while (iterator.NextVisible(false));

            HandleFieldElement(serializedObject.FindProperty(FIELD_ELEMENT_PROPERTY_NAME));

            serializedObject.ApplyModifiedProperties();

            if (GUILayout.Button(DELETE_LABEL, EditorStylesExtended.button_01))
            {
                HandleRemove(arrayProperty, index);
            }
            EditorGUILayout.EndVertical();
        }

        private void HandleFieldElement(SerializedProperty fieldElementProperty)
        {
            EditorGUILayout.BeginVertical();
            EditorGUILayout.LabelField(FIELD_ELEMENT_LABEL);
            textureSerializedProperty = fieldElementProperty.FindPropertyRelative(TEXTURE_PROPERTY_NAME);
            horizontalOffsetSerializedProperty = fieldElementProperty.FindPropertyRelative(HORIZIONTAL_OFFSET_PROPERTY_NAME);
            verticalOffsetSerializedProperty = fieldElementProperty.FindPropertyRelative(VERTICAL_OFFSET_PROPERTY_NAME);
            sizeSerializedProperty = fieldElementProperty.FindPropertyRelative(SIZE_PROPERTY_NAME);

            EditorGUILayout.PropertyField(horizontalOffsetSerializedProperty);
            EditorGUILayout.PropertyField(verticalOffsetSerializedProperty);
            EditorGUILayout.PropertyField(sizeSerializedProperty);


            textureFieldRect = EditorGUILayout.BeginVertical(GUILayout.MinHeight(SPRITE_ELEMENT_SIZE * sizeSerializedProperty.vector2IntValue.y + START_OFFSET * 2));
            textureRect = new Rect(START_OFFSET + textureFieldRect.xMin, START_OFFSET + textureFieldRect.yMin, SPRITE_ELEMENT_SIZE * sizeSerializedProperty.vector2IntValue.x, SPRITE_ELEMENT_SIZE * sizeSerializedProperty.vector2IntValue.y);
            GUILayout.Space(SPRITE_ELEMENT_SIZE * sizeSerializedProperty.vector2IntValue.y + START_OFFSET * 2);

            //handle drag and drop of texture
            currentEvent = Event.current;

            if (textureRect.Contains(currentEvent.mousePosition))
            {
                if (currentEvent.type == EventType.DragUpdated)
                {
                    if ((DragAndDrop.objectReferences.Length == 1) && (DragAndDrop.objectReferences[0].GetType() == texture2DType))
                    {
                        DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
                    }
                    else
                    {
                        DragAndDrop.visualMode = DragAndDropVisualMode.Rejected;
                    }

                    currentEvent.Use();
                }
                else if (currentEvent.type == EventType.DragPerform)
                {
                    if ((DragAndDrop.objectReferences.Length == 1) && (DragAndDrop.objectReferences[0].GetType() == texture2DType))
                    {
                        textureSerializedProperty.objectReferenceValue = DragAndDrop.objectReferences[0];
                    }

                    currentEvent.Use();
                }
            }



            if (textureSerializedProperty.objectReferenceValue == null)
            {
                GUI.DrawTexture(textureRect, placeholderTexture);
            }
            else
            {
                textureRect = new Rect(START_OFFSET + textureFieldRect.xMin + horizontalOffsetSerializedProperty.floatValue,
                    START_OFFSET + textureFieldRect.yMin + horizontalOffsetSerializedProperty.floatValue,
                    SPRITE_ELEMENT_SIZE * sizeSerializedProperty.vector2IntValue.x - (horizontalOffsetSerializedProperty.floatValue * 2f),
                    SPRITE_ELEMENT_SIZE * sizeSerializedProperty.vector2IntValue.y - (verticalOffsetSerializedProperty.floatValue * 2f));

                texture = (Texture2D)textureSerializedProperty.objectReferenceValue;

                GUI.DrawTexture(textureRect, texture, ScaleMode.ScaleToFit);

            }

            DrawGrid(textureFieldRect.xMin + START_OFFSET, textureFieldRect.yMin + START_OFFSET, sizeSerializedProperty.vector2IntValue, SPRITE_ELEMENT_SIZE);

            EditorGUILayout.EndVertical();
            EditorGUILayout.EndVertical();
        }

        private void DisplayUnselectedObject(int index, SerializedProperty arrayProperty)
        {
            clickRect = EditorGUILayout.BeginHorizontal(GUI.skin.box);
            EditorGUILayout.PropertyField(arrayProperty.GetArrayElementAtIndex(index));

            if (GUILayout.Button(DELETE_LABEL, EditorStylesExtended.button_01, GUILayout.MaxWidth(60f)))
            {
                HandleRemove(arrayProperty, index);
            }

            EditorGUILayout.EndHorizontal();
        }



        private void HandleRemove(SerializedProperty arrayProperty, int index)
        {
            UnityEngine.Object removable = arrayProperty.GetArrayElementAtIndex(index).objectReferenceValue;
            arrayProperty.DeleteArrayElementAtIndex(index);

            if (removable != null)
            {
                AssetDatabase.DeleteAsset(AssetDatabase.GetAssetPath(removable));
                AssetDatabase.Refresh();
            }
        }

        #endregion


        #region useful stuff for tab 1 and 2

        private void DrawGrid(float startX, float startY, Vector2Int size, float cellSize)
        {
            tempTextureRect = new Rect(startX, startY, LINE_WIDTH, cellSize * size.y);

            for (int i = 0; i <= size.x; i++)
            {
                GUI.DrawTexture(tempTextureRect, Texture2D.whiteTexture);
                tempTextureRect.x += cellSize;
            }

            tempTextureRect = new Rect(startX, startY, cellSize * size.x, LINE_WIDTH);

            for (int i = 0; i <= size.y; i++)
            {
                GUI.DrawTexture(tempTextureRect, Texture2D.whiteTexture);
                tempTextureRect.y += cellSize;
            }
        }

        #endregion

        #region tab 2
        private void OnOpenLevelsTab()
        {
            bool textureisMissing = false;
            string errorLabel = string.Empty;
            stringBuilder.Clear();
            stringBuilder.Append(DEFAULT_TEXTURES_MISSING);
            
            if(itemBackgroundTextureTextureProperty.objectReferenceValue == null)
            {
                if(textureisMissing)
                {
                    stringBuilder.Append(ELEMENT_SEPARATOR);
                }

                stringBuilder.Append(ITEM_BACKGROUND_TEXTURE_PROPERTY_NAME);
                textureisMissing = true;
            }

            if (redTextureProperty.objectReferenceValue == null)
            {
                if (textureisMissing)
                {
                    stringBuilder.Append(ELEMENT_SEPARATOR);
                }

                stringBuilder.Append(RED_TEXTURE_PROPERTY_NAME);
                textureisMissing = true;
            }

            if (itemBackgroundTextureTextureProperty.objectReferenceValue == null)
            {
                if (textureisMissing)
                {
                    stringBuilder.Append(ELEMENT_SEPARATOR);
                }

                stringBuilder.Append(ITEM_BACKGROUND_TEXTURE_PROPERTY_NAME);
                textureisMissing = true;
            }

            if (placeholderTextureProperty.objectReferenceValue == null)
            {
                if (textureisMissing)
                {
                    stringBuilder.Append(ELEMENT_SEPARATOR);
                }

                stringBuilder.Append(PLACEHOLDER_TEXTURE_PROPERTY_NAME);
                textureisMissing = true;
            }

            if(textureisMissing)
            {
                stringBuilder.Append(LINE_SEPARATOR);
                errorLabel = stringBuilder.ToString();
            }
            else
            {
                stringBuilder.Clear();
            }



            obstaclesCached = new FieldElement[obstaclesSerializedProperty.arraySize];
            movableObjectsCached = new FieldElement[movableObjectsSerializedProperty.arraySize];
            SerializedObject serializedObject;
            FieldElement fieldElement;

            textureisMissing = false;
            stringBuilder.Append(OBSTACLE_TEXTURES_MISSING);

            for (int i = 0; i < obstaclesSerializedProperty.arraySize; i++)
            {
                fieldElement = GetFieldElementFromObject(obstaclesSerializedProperty.GetArrayElementAtIndex(i));
                obstaclesCached[i] = fieldElement;

                if(fieldElement == null)
                {
                    if (textureisMissing)
                    {
                        stringBuilder.Append(ELEMENT_SEPARATOR);
                    }

                    if(obstaclesSerializedProperty.GetArrayElementAtIndex(i).objectReferenceValue != null)
                    {
                        stringBuilder.Append(obstaclesSerializedProperty.GetArrayElementAtIndex(i).objectReferenceValue.name);
                    }
                    else
                    {
                        stringBuilder.Append(NULL_OBJECT);
                    }

                    textureisMissing = true;
                }

            }

            if (textureisMissing)
            {
                stringBuilder.Append(LINE_SEPARATOR);
                errorLabel = stringBuilder.ToString();
            }
            else
            {
                stringBuilder.Clear();
                stringBuilder.Append(errorLabel);
            }


            textureisMissing = false;
            stringBuilder.Append(MOVABLE_OBJECTS_TEXTURES_MISSING);

            for (int i = 0; i < movableObjectsSerializedProperty.arraySize; i++)
            {
                fieldElement = GetFieldElementFromObject(movableObjectsSerializedProperty.GetArrayElementAtIndex(i));
                movableObjectsCached[i] = fieldElement;

                if (fieldElement == null)
                {
                    if (textureisMissing)
                    {
                        stringBuilder.Append(ELEMENT_SEPARATOR);
                    }

                    if (movableObjectsSerializedProperty.GetArrayElementAtIndex(i).objectReferenceValue != null)
                    {
                        stringBuilder.Append(movableObjectsSerializedProperty.GetArrayElementAtIndex(i).objectReferenceValue.name);
                    }
                    else
                    {
                        stringBuilder.Append(NULL_OBJECT);
                    }

                    textureisMissing = true;
                }
            }

            if (textureisMissing)
            {
                stringBuilder.Append(LINE_SEPARATOR);
                errorLabel = stringBuilder.ToString();
            }
            else
            {
                stringBuilder.Clear();
                stringBuilder.Append(errorLabel);
            }

            if (errorLabel.Length > 0)
            {
                tabHandler.SetTabIndex(0);
                EditorUtility.DisplayDialog(ERROR, errorLabel, OK);
            }
        }

        private FieldElement GetFieldElementFromObject(SerializedProperty objectProperty)
        {
            if (objectProperty.objectReferenceValue == null)
            {
                return null;
            }

            SerializedObject serializedObject = new SerializedObject(objectProperty.objectReferenceValue);
            return ParseFieldElement(serializedObject.FindProperty(FIELD_ELEMENT_PROPERTY_NAME));
        }

        private FieldElement ParseFieldElement(SerializedProperty fieldElementProperty)
        {
            textureSerializedProperty = fieldElementProperty.FindPropertyRelative(TEXTURE_PROPERTY_NAME);

            if (textureSerializedProperty.objectReferenceValue == null)
            {
                return null;
            }

            horizontalOffsetSerializedProperty = fieldElementProperty.FindPropertyRelative(HORIZIONTAL_OFFSET_PROPERTY_NAME);
            verticalOffsetSerializedProperty = fieldElementProperty.FindPropertyRelative(VERTICAL_OFFSET_PROPERTY_NAME);
            sizeSerializedProperty = fieldElementProperty.FindPropertyRelative(SIZE_PROPERTY_NAME);

            return new FieldElement((Texture2D)textureSerializedProperty.objectReferenceValue, horizontalOffsetSerializedProperty.floatValue, verticalOffsetSerializedProperty.floatValue, sizeSerializedProperty.vector2IntValue);
        }

        private void DrawLevelsTab()
        {
            EditorGUILayout.BeginHorizontal();
            BeginDisabledGroup(itemIsDragged);
            EditorGUILayout.BeginVertical(GUILayout.Width(SIDEBAR_WIDTH));
            levelsHandler.DisplayReordableList();
            levelsHandler.DrawRenameLevelsButton();
            EditorGUILayout.EndVertical();
            EndDisabledGroup();

            GUILayout.Space(8);


            pageRect = EditorGUILayout.BeginVertical();
            levelScrollVector = EditorGUILayout.BeginScrollView(levelScrollVector);
            EditorGUILayout.BeginVertical();
            DrawOpenLevel();
            EditorGUILayout.EndVertical();
            EditorGUILayout.EndScrollView();
            EditorGUILayout.EndVertical();
            EditorGUILayout.EndHorizontal();
        }

        private void DrawOpenLevel()
        {
            if (levelsHandler.SelectedLevelIndex == -1)
            {
                return;
            }

            if (IsPropertyChanged(levelsHandler.SelectedLevelProperty, new GUIContent("file: ")))
            {
                levelsHandler.ReopenLevel();
            }

            if (selectedLevelRepresentation.NullLevel)
            {
                return;
            }

            DrawVariables();
            GUILayout.Space(START_OFFSET);
            DrawLevelGrid();
            DrawFieldElementsPalette(OBSTACLES_LABEL, obstaclesCached, DraggetItemType.ObstacleFromPalette);
            DrawFieldElementsPalette(MOVABLE_OBJECTS_LABEL, movableObjectsCached, DraggetItemType.MovableObjectFromPalette);
            DisplayLevelTutorialInfo();

            if (GUILayout.Button("Activate Level"))
            {
                ActivateLevel(levelsHandler.SelectedLevelIndex);
            }

            selectedLevelRepresentation.ApplyChanges();
        }

        private void ActivateLevel(int levelIndex)
        {
            GlobalSave globalSave = SaveController.GetGlobalSave();
            if(globalSave != null)
            {
                LevelSave levelSave = globalSave.GetSaveObject<LevelSave>("level");
                if(levelSave != null)
                {
                    levelSave.ActualLevelID = levelIndex;
                    levelSave.CurrentLevelID = levelIndex;

                    Debug.Log(string.Format("[Level Editor]: Level {0} is activated!", (levelIndex + 1)));

                    SaveController.SaveCustom(globalSave);
                }
            }
        }

        private void DrawVariables()
        {
            BeginDisabledGroup(itemIsDragged);
            paletteCellSize = EditorGUILayout.IntField(PALETTE_CELL_SIZE, paletteCellSize);
            levelCellSize = EditorGUILayout.IntField(LEVEL_CELL_SIZE, levelCellSize); ;
            EditorGUILayout.PropertyField(selectedLevelRepresentation.sizeProperty);
            EndDisabledGroup();
        }

        private void DrawLevelGrid()
        {
            groupRect = EditorGUILayout.BeginVertical(GUILayout.MinHeight(selectedLevelRepresentation.sizeProperty.vector2IntValue.y * levelCellSize));

            if (groupRect.yMin != 0)
            {
                levelGridPositionY = groupRect.yMin + pageRect.yMin - levelScrollVector.y;
                levelGridPositionX = groupRect.xMin + pageRect.xMin - levelScrollVector.x;
            }

            DrawGrid(groupRect.xMin, groupRect.yMin, selectedLevelRepresentation.sizeProperty.vector2IntValue, levelCellSize);
            DrawLevelItems(groupRect.xMin, groupRect.yMin, selectedLevelRepresentation.obstaclesProperty, DraggetItemType.ObstacleFromLevel);
            DrawLevelItems(groupRect.xMin, groupRect.yMin, selectedLevelRepresentation.movableObjectsProperty, DraggetItemType.MovableObjectFromLevel);
            GUILayout.Space(selectedLevelRepresentation.sizeProperty.vector2IntValue.y * levelCellSize);
            EditorGUILayout.EndVertical();
            EditorGUILayout.Space();
        }

        private void DrawLevelItems(float startX, float startY, SerializedProperty levelArraySerializedProperty, DraggetItemType type)
        {
            int cachedIndex;
            int angle;
            Vector2Int position;
            FieldElement fieldElement;


            for (int i = 0; i < levelArraySerializedProperty.arraySize; i++)
            {
                if (itemIsDragged && (draggetItemType == type) && (draggedItemLevelIndex == i))
                {
                    continue;
                }

                if (type == DraggetItemType.ObstacleFromLevel)
                {
                    selectedLevelRepresentation.GetLevelItem(levelArraySerializedProperty, i, obstaclesSerializedProperty, out cachedIndex, out angle, out position);
                    fieldElement = obstaclesCached[cachedIndex];
                }
                else if (type == DraggetItemType.MovableObjectFromLevel)
                {
                    selectedLevelRepresentation.GetLevelItem(levelArraySerializedProperty, i, movableObjectsSerializedProperty, out cachedIndex, out angle, out position);
                    fieldElement = movableObjectsCached[cachedIndex];
                }
                else
                {
                    Debug.LogError("Method called with incorrect\"type\" parameter");
                    return;
                }

                itemPosition = Vector2.one * position * levelCellSize + FieldElement.GetOffset(levelCellSize, angle);
                itemPosition.x += startX;
                itemPosition.y += startY;

                DrawRotatedTexture(itemPosition, angle, levelCellSize, fieldElement, true, true, delegate
                {
                    if (!itemIsDragged)
                    {
                        draggetItemAngle = angle;
                        draggetItemType = type;
                        draggedItemLevelIndex = i;
                        draggedItemCachedIndex = cachedIndex;

                        UpdateLevelFilledGridCell();
                        itemIsDragged = true;
                    }
                    else
                    {
                        currentEvent = Event.current;

                        if(currentEvent.button == 1)
                        {
                            draggetItemAngle = (draggetItemAngle + 90) % 360; // rotate currently selected object
                        }
                    }
                });
            }
        }

        private void DrawRotatedTexture(Vector2 itemPosition, int itemAngle, float cellSize, FieldElement fieldElement, bool displayItemBackground, bool isButton, Action onClickCallBack)
        {
            matrixBackup = GUI.matrix;

            fullRect = fieldElement.GetFullRect(itemPosition.x, itemPosition.y, cellSize);
            textureRect = fieldElement.GetRect(itemPosition.x, itemPosition.y, cellSize);

            if ((itemAngle != 0) && ((Screen.width - fullRect.xMax < 30) || (Screen.height - fullRect.yMax + contentScrollViewVector.y < 30)))
            {
                secondRotatingPoint = itemPosition;
                firstRotatingPoint = secondRotatingPoint - fullRect.size;
                fullRect.position = firstRotatingPoint - fullRect.size;
                textureRect = fieldElement.GetRect(fullRect.position.x, fullRect.position.y, cellSize);

                //GUI.DrawTexture(fullRect, greenTexture, ScaleMode.StretchToFill); debug stuff
                GUIUtility.RotateAroundPivot(180, firstRotatingPoint);
                //GUI.DrawTexture(fullRect, redTexture, ScaleMode.StretchToFill);   debug stuff
                GUIUtility.RotateAroundPivot(180 + itemAngle, secondRotatingPoint);
            }
            else
            {
                GUIUtility.RotateAroundPivot(itemAngle, itemPosition);
            }

            if (displayItemBackground)
            {
                GUI.DrawTexture(fullRect, itemBackgroundTexture, ScaleMode.StretchToFill);
            }

            GUI.DrawTexture(textureRect, fieldElement.Texture, ScaleMode.ScaleToFit);

            if (isButton)
            {
                if (GUI.Button(fullRect, GUIContent.none, GUIStyle.none))
                {
                    onClickCallBack?.Invoke();
                }
            }

            GUI.matrix = matrixBackup;
        }

        private void DrawFieldElementsPalette(string label, FieldElement[] cachedElements, DraggetItemType type)
        {
            EditorGUILayout.LabelField(label);

            groupRect = EditorGUILayout.BeginVertical();
            startPosX = groupRect.xMin + START_OFFSET;
            startPosY = groupRect.yMin + START_OFFSET;
            maxHeight = 0f;

            for (int i = 0; i < cachedElements.Length; i++)
            {
                if (startPosX + cachedElements[i].GetWidth(paletteCellSize) < Screen.width)
                {
                    textureRect = cachedElements[i].GetRect(startPosX, startPosY, paletteCellSize);
                    GUI.DrawTexture(textureRect, cachedElements[i].Texture, ScaleMode.ScaleToFit);
                    DrawGrid(startPosX, startPosY, cachedElements[i].Size, paletteCellSize);

                    startPosX += textureRect.width + START_OFFSET;

                    if (maxHeight < textureRect.height)
                    {
                        maxHeight = textureRect.height;
                    }
                }
                else
                {
                    startPosX = groupRect.xMin + START_OFFSET;
                    startPosY += maxHeight + START_OFFSET;
                    maxHeight = 0;
                    textureRect = cachedElements[i].GetRect(startPosX, startPosY, paletteCellSize);
                    GUI.DrawTexture(textureRect, cachedElements[i].Texture, ScaleMode.ScaleToFit);
                    DrawGrid(startPosX, startPosY, cachedElements[i].Size, paletteCellSize);

                    startPosX += textureRect.width + START_OFFSET;

                    if (maxHeight < textureRect.height)
                    {
                        maxHeight = textureRect.height;
                    }

                }


                //handle drag start
                if (!itemIsDragged)
                {
                    currentEvent = Event.current;

                    if (textureRect.Contains(currentEvent.mousePosition))
                    {
                        if (currentEvent.type == EventType.MouseDown)
                        {

                            draggetItemAngle = 0;
                            draggetItemType = type;
                            draggedItemLevelIndex = -1;
                            draggedItemCachedIndex = i;

                            UpdateLevelFilledGridCell();
                            itemIsDragged = true;
                            currentEvent.Use();
                        }
                    }
                }
            }

            startPosY += maxHeight + START_OFFSET;

            GUILayout.Space(startPosY - groupRect.yMin);
            EditorGUILayout.EndVertical();
        }



        #region Handle drag

        private void UpdateLevelFilledGridCell()
        {
            filledGridCells.Clear();
            int cachedIndex;
            int angle;
            Vector2Int position;

            for (int i = 0; i < selectedLevelRepresentation.obstaclesProperty.arraySize; i++)
            {
                if ((draggetItemType == DraggetItemType.ObstacleFromLevel) && (draggedItemLevelIndex == i))
                {
                    continue;
                }

                selectedLevelRepresentation.GetLevelItem(selectedLevelRepresentation.obstaclesProperty, i, obstaclesSerializedProperty, out cachedIndex, out angle, out position);
                filledGridCells.AddRange(obstaclesCached[cachedIndex].GetGridCells(position, angle));
            }

            for (int i = 0; i < selectedLevelRepresentation.movableObjectsProperty.arraySize; i++)
            {
                if ((draggetItemType == DraggetItemType.MovableObjectFromLevel) && (draggedItemLevelIndex == i))
                {
                    continue;
                }

                selectedLevelRepresentation.GetLevelItem(selectedLevelRepresentation.movableObjectsProperty, i, movableObjectsSerializedProperty, out cachedIndex, out angle, out position);
                filledGridCells.AddRange(movableObjectsCached[cachedIndex].GetGridCells(position, angle));
            }
        }

        private void Update()
        {
            if (itemIsDragged)
            {
                Repaint();
            }
        }
        private void HandleDragOfLevelItem()
        {
            if (!itemIsDragged)
            {
                return;
            }

            currentEvent = Event.current;

            if (currentEvent == null)
            {
                return;
            }

            HandleDragEvents();

            //find element position
            draggetItemUIGridPosition.x = Mathf.FloorToInt((currentEvent.mousePosition.x - levelGridPositionX) / levelCellSize);
            draggetItemUIGridPosition.y = Mathf.FloorToInt((currentEvent.mousePosition.y - levelGridPositionY) / levelCellSize);

            //snap if inside grid
            if ((draggetItemUIGridPosition.x >= 0) && (draggetItemUIGridPosition.x < selectedLevelRepresentation.sizeProperty.vector2IntValue.x) &&
                (draggetItemUIGridPosition.y >= 0) && (draggetItemUIGridPosition.y < selectedLevelRepresentation.sizeProperty.vector2IntValue.y))
            {
                draggetItemSnapActive = true;
                rectPosition.x = (draggetItemUIGridPosition.x * levelCellSize + levelGridPositionX);
                rectPosition.y = (draggetItemUIGridPosition.y * levelCellSize + levelGridPositionY);
                texturePointRect = new Rect(rectPosition, new Vector2(levelCellSize, levelCellSize));
                rectPosition += FieldElement.GetOffset(levelCellSize, draggetItemAngle);
                UpdateDragStatusForLevelItem();
            }
            else
            {
                draggetItemSnapActive = false;
                rectPosition = currentEvent.mousePosition;
                texturePointRect = new Rect(rectPosition, new Vector2(levelCellSize, levelCellSize));
                draggetItemDropAcceptable = false;
            }

            //draw dragged item
            DrawRotatedTexture(rectPosition, draggetItemAngle, levelCellSize, GetDraggedFieldElement(), true, false, null);

            //element position cell in grid
            if (draggetItemSnapActive)
            {
                if (draggetItemDropAcceptable)
                {
                    GUI.DrawTexture(texturePointRect, greenTexture, ScaleMode.ScaleAndCrop);
                }
                else
                {
                    GUI.DrawTexture(texturePointRect, redTexture, ScaleMode.ScaleAndCrop);
                }
            }
        }

        private void HandleDragEvents()
        {
            switch (currentEvent.type)
            {
                case EventType.MouseLeaveWindow:
                    itemIsDragged = false;
                    currentEvent.Use();
                    break;
                case EventType.MouseDown:

                    if (currentEvent.button == 0)
                    {
                        if (draggetItemDropAcceptable)
                        {
                            UpdateLevelItem();
                            itemIsDragged = false;
                        }
                        else
                        {
                            if (!draggetItemSnapActive)
                            {
                                RemoveLevelItem();
                                itemIsDragged = false;
                            }
                        }
                    }

                    currentEvent.Use();
                    break;

                case EventType.ContextClick:
                    draggetItemAngle = (draggetItemAngle + 90) % 360;
                    currentEvent.Use();
                    break;
                default:
                    break;
            }
        }

        private FieldElement GetDraggedFieldElement()
        {
            if ((draggetItemType == DraggetItemType.ObstacleFromLevel) || (draggetItemType == DraggetItemType.ObstacleFromPalette))
            {
                return obstaclesCached[draggedItemCachedIndex];
            }
            else
            {
                return movableObjectsCached[draggedItemCachedIndex];
            }
        }

        private void UpdateLevelItem()
        {
            switch (draggetItemType)
            {
                case DraggetItemType.ObstacleFromPalette:
                    selectedLevelRepresentation.CreateItem(selectedLevelRepresentation.obstaclesProperty, draggetItemAngle, draggetItemUIGridPosition, obstaclesSerializedProperty.GetArrayElementAtIndex(draggedItemCachedIndex));
                    break;
                case DraggetItemType.MovableObjectFromPalette:
                    selectedLevelRepresentation.CreateItem(selectedLevelRepresentation.movableObjectsProperty, draggetItemAngle, draggetItemUIGridPosition, movableObjectsSerializedProperty.GetArrayElementAtIndex(draggedItemCachedIndex));
                    break;
                case DraggetItemType.ObstacleFromLevel:
                    selectedLevelRepresentation.UpdateItem(selectedLevelRepresentation.obstaclesProperty, draggetItemAngle, draggetItemUIGridPosition, draggedItemLevelIndex);
                    break;
                case DraggetItemType.MovableObjectFromLevel:
                    selectedLevelRepresentation.UpdateItem(selectedLevelRepresentation.movableObjectsProperty, draggetItemAngle, draggetItemUIGridPosition, draggedItemLevelIndex);
                    break;
                default:
                    break;
            }
        }

        private void RemoveLevelItem()
        {
            if (draggetItemType == DraggetItemType.ObstacleFromLevel)
            {
                selectedLevelRepresentation.RemoveItem(selectedLevelRepresentation.obstaclesProperty, draggedItemLevelIndex);
            }
            else if (draggetItemType == DraggetItemType.MovableObjectFromLevel)
            {
                selectedLevelRepresentation.RemoveItem(selectedLevelRepresentation.movableObjectsProperty, draggedItemLevelIndex);
            }
        }

        private void UpdateDragStatusForLevelItem()
        {
            draggetItemGridCells.Clear();
            draggetItemGridCells.AddRange(GetDraggedFieldElement().GetGridCells(draggetItemUIGridPosition, draggetItemAngle));
            draggetItemDropAcceptable = true;

            foreach (Vector2Int cell in draggetItemGridCells)
            {
                if ((cell.x < 0) || (cell.y < 0) || (cell.x >= selectedLevelRepresentation.sizeProperty.vector2IntValue.x) || (cell.y >= selectedLevelRepresentation.sizeProperty.vector2IntValue.y))
                {
                    draggetItemDropAcceptable = false;
                    break;
                }

                if (filledGridCells.Contains(cell))
                {
                    draggetItemDropAcceptable = false;
                    break;
                }
            }
        }
        #endregion


        private void DisplayLevelTutorialInfo()
        {
            EditorGUILayout.HelpBox("Use left click to select object.", MessageType.Info);
            EditorGUILayout.HelpBox("Use left click to place selected object.", MessageType.Info);
            EditorGUILayout.HelpBox("Use right click to rotate selected object.", MessageType.Info);
            EditorGUILayout.HelpBox("Place object outside of grid to remove object from grid.", MessageType.Info);
            EditorGUILayout.HelpBox("All changes save automatically.", MessageType.Info);
            EditorGUILayout.HelpBox("Green cell show position of selected object.", MessageType.Info);
            EditorGUILayout.HelpBox("Red cell means that you can`t place object in this cell.", MessageType.Info);
            EditorGUILayout.HelpBox("Enemies can only be placed at least one cell away from grid border of grid.", MessageType.Info);
        }
        #endregion

        #region tab 3

        private void DrawTexturesTab()
        {
            if (IsPropertyChanged(placeholderTextureProperty))
            {
                placeholderTexture = (Texture2D)placeholderTextureProperty.objectReferenceValue;
            }

            if (IsPropertyChanged(greenTextureProperty))
            {
                greenTexture = (Texture2D)greenTextureProperty.objectReferenceValue;
            }

            if (IsPropertyChanged(redTextureProperty))
            {
                redTexture = (Texture2D)redTextureProperty.objectReferenceValue;
            }

            if (IsPropertyChanged(itemBackgroundTextureTextureProperty))
            {
                itemBackgroundTexture = (Texture2D)itemBackgroundTextureTextureProperty.objectReferenceValue;
            }
        }

        #endregion

        private enum DraggetItemType
        {
            ObstacleFromPalette,
            MovableObjectFromPalette,
            ObstacleFromLevel,
            MovableObjectFromLevel
        }

        protected class LevelRepresentation : LevelRepresentationBase
        {
            private const string SIZE_PROPERTY_NAME = LevelsEditorWindow.SIZE_PROPERTY_NAME;
            private const string OBSTACLES_PROPERTY_NAME = "obstacles";
            private const string MOVABLE_OBJECTS_PROPERTY_NAME = "movableObjects";
            private const string ELEMENT_PROPERTY_NAME = "element";
            private const string POSITION_PROPERTY_NAME = "position";
            private const string ANGLE_PROPERTY_NAME = "angle";
            private readonly Vector2Int LEVEL_MIN_SIZE = new Vector2Int(10, 10);
            private readonly Vector2Int LEVEL_MAX_SIZE = new Vector2Int(50, 50);

            public SerializedProperty sizeProperty;
            public SerializedProperty obstaclesProperty;
            public SerializedProperty movableObjectsProperty;

            private SerializedProperty tempElementProperty;
            private SerializedProperty tempPositionProperty;
            private SerializedProperty tempAngleProperty;

            public LevelRepresentation(UnityEngine.Object levelObject) : base(levelObject)
            {
            }

            protected override void ReadFields()
            {
                sizeProperty = serializedLevelObject.FindProperty(SIZE_PROPERTY_NAME);
                obstaclesProperty = serializedLevelObject.FindProperty(OBSTACLES_PROPERTY_NAME);
                movableObjectsProperty = serializedLevelObject.FindProperty(MOVABLE_OBJECTS_PROPERTY_NAME);
            }

            public void HandleSizeChange()
            {
                if (sizeProperty.vector2IntValue.x < LEVEL_MIN_SIZE.x)
                {
                    sizeProperty.vector2IntValue = new Vector2Int(LEVEL_MIN_SIZE.x, sizeProperty.vector2IntValue.y);
                }
                else if (sizeProperty.vector2IntValue.x > LEVEL_MAX_SIZE.x)
                {
                    sizeProperty.vector2IntValue = new Vector2Int(LEVEL_MAX_SIZE.x, sizeProperty.vector2IntValue.y);
                }

                if (sizeProperty.vector2IntValue.y < LEVEL_MIN_SIZE.y)
                {
                    sizeProperty.vector2IntValue = new Vector2Int(sizeProperty.vector2IntValue.x, LEVEL_MIN_SIZE.y);
                }
                else if (sizeProperty.vector2IntValue.y > LEVEL_MAX_SIZE.y)
                {
                    sizeProperty.vector2IntValue = new Vector2Int(sizeProperty.vector2IntValue.x, LEVEL_MAX_SIZE.y);
                }

            }

            public override void Clear()
            {
                sizeProperty.vector2IntValue = LEVEL_MIN_SIZE;
                obstaclesProperty.arraySize = 0;
                movableObjectsProperty.arraySize = 0;
            }

            public void GetLevelItem(SerializedProperty levelArrayProperty, int levelArrayIndex, SerializedProperty databaseArray, out int cachedElementIndex, out int angle, out Vector2Int position)
            {
                for (int i = 0; i < databaseArray.arraySize; i++)
                {
                    tempElementProperty = levelArrayProperty.GetArrayElementAtIndex(levelArrayIndex).FindPropertyRelative(ELEMENT_PROPERTY_NAME);

                    if (tempElementProperty.objectReferenceValue == databaseArray.GetArrayElementAtIndex(i).objectReferenceValue)
                    {
                        tempAngleProperty = levelArrayProperty.GetArrayElementAtIndex(levelArrayIndex).FindPropertyRelative(ANGLE_PROPERTY_NAME);
                        tempPositionProperty = levelArrayProperty.GetArrayElementAtIndex(levelArrayIndex).FindPropertyRelative(POSITION_PROPERTY_NAME);
                        cachedElementIndex = i;
                        angle = tempAngleProperty.intValue;
                        position = tempPositionProperty.vector2IntValue;
                        return;
                    }
                }

                Debug.LogError("Unknown element encountered. Element removed.");
                levelArrayProperty.DeleteArrayElementAtIndex(levelArrayIndex);
                cachedElementIndex = -1;
                angle = 0;
                position = Vector2Int.zero;
            }

            public void CreateItem(SerializedProperty levelArrayProperty, int angle, Vector2Int position, SerializedProperty element)
            {
                levelArrayProperty.arraySize++;
                int index = levelArrayProperty.arraySize - 1;
                levelArrayProperty.GetArrayElementAtIndex(index).FindPropertyRelative(ELEMENT_PROPERTY_NAME).objectReferenceValue = element.objectReferenceValue;
                levelArrayProperty.GetArrayElementAtIndex(index).FindPropertyRelative(ANGLE_PROPERTY_NAME).intValue = angle;
                levelArrayProperty.GetArrayElementAtIndex(index).FindPropertyRelative(POSITION_PROPERTY_NAME).vector2IntValue = position;
                ApplyChanges();
            }

            public void UpdateItem(SerializedProperty levelArrayProperty, int angle, Vector2Int position, int index)
            {
                levelArrayProperty.GetArrayElementAtIndex(index).FindPropertyRelative(ANGLE_PROPERTY_NAME).intValue = angle;
                levelArrayProperty.GetArrayElementAtIndex(index).FindPropertyRelative(POSITION_PROPERTY_NAME).vector2IntValue = position;
                ApplyChanges();
            }

            public void RemoveItem(SerializedProperty levelArrayProperty, int index)
            {
                levelArrayProperty.DeleteArrayElementAtIndex(index);
                ApplyChanges();
            }
        }
    }
}

// -----------------
// 2d grid with objects level editor v 1.2
// -----------------

// Changelog
// v 1.1
// • Reordered som methods
// v 1.1
// • Fixed errors
// • Fixed new element names
// v 1 basic version works