#ifndef org_orekit_models_earth_tessellation_PythonTileAiming_H
#define org_orekit_models_earth_tessellation_PythonTileAiming_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          class TileAiming;
        }
      }
    }
    namespace bodies {
      class GeodeticPoint;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          class PythonTileAiming : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_alongTileDirection_cb13d5b31f03b28f,
              mid_finalize_0fa09c18fee449d5,
              mid_getSingularPoints_2afa36052df4765d,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonTileAiming(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonTileAiming(const PythonTileAiming& obj) : ::java::lang::Object(obj) {}

            PythonTileAiming();

            ::org::hipparchus::geometry::euclidean::threed::Vector3D alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::bodies::GeodeticPoint &) const;
            void finalize() const;
            ::java::util::List getSingularPoints() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonTileAiming);
          extern PyTypeObject *PY_TYPE(PythonTileAiming);

          class t_PythonTileAiming {
          public:
            PyObject_HEAD
            PythonTileAiming object;
            static PyObject *wrap_Object(const PythonTileAiming&);
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
