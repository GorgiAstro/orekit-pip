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
              mid_getCrossedBoundaryColumns_ebc3194797d38989,
              mid_getCrossedBoundaryRows_ebc3194797d38989,
              mid_getLevels_412668abc8d889e9,
              mid_getMaxElevation_093995dc5657c18c,
              mid_getMergeLevel_4885f823e425a625,
              mid_getMinElevation_093995dc5657c18c,
              mid_isColumnMerging_e034cac2b514bb09,
              mid_locateMax_ebc3194797d38989,
              mid_locateMin_ebc3194797d38989,
              mid_processUpdatedElevation_cc18240f4a737f14,
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
