#ifndef org_orekit_rugged_raster_TilesCache_H
#define org_orekit_rugged_raster_TilesCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class TileFactory;
        class TileUpdater;
        class Tile;
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

        class TilesCache : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c14b32994c471389,
            mid_getTile_de8760a8a4fbd57b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TilesCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TilesCache(const TilesCache& obj) : ::java::lang::Object(obj) {}

          TilesCache(const ::org::orekit::rugged::raster::TileFactory &, const ::org::orekit::rugged::raster::TileUpdater &, jint);

          ::org::orekit::rugged::raster::Tile getTile(jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(TilesCache);
        extern PyTypeObject *PY_TYPE(TilesCache);

        class t_TilesCache {
        public:
          PyObject_HEAD
          TilesCache object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TilesCache *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TilesCache&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TilesCache&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
