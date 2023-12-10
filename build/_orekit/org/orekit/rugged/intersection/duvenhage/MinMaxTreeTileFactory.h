#ifndef org_orekit_rugged_intersection_duvenhage_MinMaxTreeTileFactory_H
#define org_orekit_rugged_intersection_duvenhage_MinMaxTreeTileFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          class MinMaxTreeTile;
        }
      }
      namespace raster {
        class TileFactory;
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
      namespace intersection {
        namespace duvenhage {

          class MinMaxTreeTileFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_createTile_ce69f237ff82efce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MinMaxTreeTileFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MinMaxTreeTileFactory(const MinMaxTreeTileFactory& obj) : ::java::lang::Object(obj) {}

            MinMaxTreeTileFactory();

            ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile createTile() const;
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
          extern PyType_Def PY_TYPE_DEF(MinMaxTreeTileFactory);
          extern PyTypeObject *PY_TYPE(MinMaxTreeTileFactory);

          class t_MinMaxTreeTileFactory {
          public:
            PyObject_HEAD
            MinMaxTreeTileFactory object;
            static PyObject *wrap_Object(const MinMaxTreeTileFactory&);
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
