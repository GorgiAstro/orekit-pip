#ifndef org_orekit_rugged_raster_TileUpdater_H
#define org_orekit_rugged_raster_TileUpdater_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class UpdatableTile;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        class TileUpdater : public ::java::lang::Object {
         public:
          enum {
            mid_updateTile_76542305a171ddb6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TileUpdater(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TileUpdater(const TileUpdater& obj) : ::java::lang::Object(obj) {}

          void updateTile(jdouble, jdouble, const ::org::orekit::rugged::raster::UpdatableTile &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        extern PyType_Def PY_TYPE_DEF(TileUpdater);
        extern PyTypeObject *PY_TYPE(TileUpdater);

        class t_TileUpdater {
        public:
          PyObject_HEAD
          TileUpdater object;
          static PyObject *wrap_Object(const TileUpdater&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
