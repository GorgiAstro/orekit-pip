#ifndef org_orekit_models_earth_displacement_PythonStationDisplacement_H
#define org_orekit_models_earth_displacement_PythonStationDisplacement_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {
          class StationDisplacement;
        }
      }
    }
    namespace data {
      class BodiesElements;
    }
    namespace frames {
      class Frame;
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
        namespace displacement {

          class PythonStationDisplacement : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_displacement_44ddfc2adc2cc28a,
              mid_finalize_ff7cb6c242604316,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonStationDisplacement(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonStationDisplacement(const PythonStationDisplacement& obj) : ::java::lang::Object(obj) {}

            PythonStationDisplacement();

            ::org::hipparchus::geometry::euclidean::threed::Vector3D displacement(const ::org::orekit::data::BodiesElements &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void finalize() const;
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
        namespace displacement {
          extern PyType_Def PY_TYPE_DEF(PythonStationDisplacement);
          extern PyTypeObject *PY_TYPE(PythonStationDisplacement);

          class t_PythonStationDisplacement {
          public:
            PyObject_HEAD
            PythonStationDisplacement object;
            static PyObject *wrap_Object(const PythonStationDisplacement&);
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
