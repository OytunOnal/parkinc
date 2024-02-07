using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon.Store
{
    public class DummyStorePreview3D : StorePreview3D
    {
        public override void Init()
        {
            Texture = new RenderTexture(1, 1, 0);
        }

        public override void SpawnPrefab(GameObject prefab)
        {

        }
    }
}