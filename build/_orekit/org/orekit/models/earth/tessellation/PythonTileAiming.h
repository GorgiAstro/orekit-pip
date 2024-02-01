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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
    namespace models {
      namespace earth {
        namespace tessellation {
          class TileAiming;
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
              mid_init$_ff7cb6c242604316,
              mid_alongTileDirection_73bb6a45361007eb,
              mid_finalize_ff7cb6c242604316,
              mid_getSingularPoints_d751c1a57012b438,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
