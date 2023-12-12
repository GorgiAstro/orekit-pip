#ifndef org_orekit_rugged_raster_SimpleTileFactory_H
#define org_orekit_rugged_raster_SimpleTileFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class TileFactory;
        class SimpleTile;
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

        class SimpleTileFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_createTile_cae927382788fc7b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleTileFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleTileFactory(const SimpleTileFactory& obj) : ::java::lang::Object(obj) {}

          SimpleTileFactory();

          ::org::orekit::rugged::raster::SimpleTile createTile() const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleTileFactory);
        extern PyTypeObject *PY_TYPE(SimpleTileFactory);

        class t_SimpleTileFactory {
        public:
          PyObject_HEAD
          SimpleTileFactory object;
          static PyObject *wrap_Object(const SimpleTileFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
