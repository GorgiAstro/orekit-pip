#ifndef org_orekit_rugged_intersection_duvenhage_MinMaxTreeTile_H
#define org_orekit_rugged_intersection_duvenhage_MinMaxTreeTile_H

#include "org/orekit/rugged/raster/SimpleTile.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          class MinMaxTreeTile : public ::org::orekit::rugged::raster::SimpleTile {
           public:
            enum {
              mid_getCrossedBoundaryColumns_4cce8278046f494a,
              mid_getCrossedBoundaryRows_4cce8278046f494a,
              mid_getLevels_570ce0828f81a2c1,
              mid_getMaxElevation_3d407e6a8cf9e8ca,
              mid_getMergeLevel_0e188a513e3e1b15,
              mid_getMinElevation_3d407e6a8cf9e8ca,
              mid_isColumnMerging_b6e9be1df30aebaf,
              mid_locateMax_4cce8278046f494a,
              mid_locateMin_4cce8278046f494a,
              mid_processUpdatedElevation_fa9d415d19f69361,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MinMaxTreeTile(jobject obj) : ::org::orekit::rugged::raster::SimpleTile(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MinMaxTreeTile(const MinMaxTreeTile& obj) : ::org::orekit::rugged::raster::SimpleTile(obj) {}

            JArray< jint > getCrossedBoundaryColumns(jint, jint, jint) const;
            JArray< jint > getCrossedBoundaryRows(jint, jint, jint) const;
            jint getLevels() const;
            jdouble getMaxElevation(jint, jint, jint) const;
            jint getMergeLevel(jint, jint, jint, jint) const;
            jdouble getMinElevation(jint, jint, jint) const;
            jboolean isColumnMerging(jint) const;
            JArray< jint > locateMax(jint, jint, jint) const;
            JArray< jint > locateMin(jint, jint, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          extern PyType_Def PY_TYPE_DEF(MinMaxTreeTile);
          extern PyTypeObject *PY_TYPE(MinMaxTreeTile);

          class t_MinMaxTreeTile {
          public:
            PyObject_HEAD
            MinMaxTreeTile object;
            static PyObject *wrap_Object(const MinMaxTreeTile&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
