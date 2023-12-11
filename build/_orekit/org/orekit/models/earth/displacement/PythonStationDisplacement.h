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
    namespace data {
      class BodiesElements;
    }
    namespace frames {
      class Frame;
    }
    namespace models {
      namespace earth {
        namespace displacement {
          class StationDisplacement;
        }
      }
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
              mid_init$_0640e6acf969ed28,
              mid_displacement_2092c3958d15642d,
              mid_finalize_0640e6acf969ed28,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
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
