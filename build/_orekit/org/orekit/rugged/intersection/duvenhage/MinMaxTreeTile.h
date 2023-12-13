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
              mid_getCrossedBoundaryColumns_f556b53ccd261e0b,
              mid_getCrossedBoundaryRows_f556b53ccd261e0b,
              mid_getLevels_55546ef6a647f39b,
              mid_getMaxElevation_2f53baea9459d443,
              mid_getMergeLevel_aad24acd6036a6f1,
              mid_getMinElevation_2f53baea9459d443,
              mid_isColumnMerging_96f51a3f36d3a2a7,
              mid_locateMax_f556b53ccd261e0b,
              mid_locateMin_f556b53ccd261e0b,
              mid_processUpdatedElevation_ab69da052b88f50c,
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
