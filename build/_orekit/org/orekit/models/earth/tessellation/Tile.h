#ifndef org_orekit_models_earth_tessellation_Tile_H
#define org_orekit_models_earth_tessellation_Tile_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          class Tile : public ::java::lang::Object {
           public:
            enum {
              mid_init$_13a715b814f97aa5,
              mid_getCenter_8672b163b0e4a5a3,
              mid_getInterpolatedPoint_2cd300684b213ae3,
              mid_getVertices_d0e3486bf8e6ab42,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Tile(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Tile(const Tile& obj) : ::java::lang::Object(obj) {}

            Tile(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &);

            ::org::orekit::bodies::GeodeticPoint getCenter() const;
            ::org::orekit::bodies::GeodeticPoint getInterpolatedPoint(jdouble, jdouble) const;
            JArray< ::org::orekit::bodies::GeodeticPoint > getVertices() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          extern PyType_Def PY_TYPE_DEF(Tile);
          extern PyTypeObject *PY_TYPE(Tile);

          class t_Tile {
          public:
            PyObject_HEAD
            Tile object;
            static PyObject *wrap_Object(const Tile&);
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
