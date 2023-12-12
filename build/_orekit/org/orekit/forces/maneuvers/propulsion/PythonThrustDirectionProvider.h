#ifndef org_orekit_forces_maneuvers_propulsion_PythonThrustDirectionProvider_H
#define org_orekit_forces_maneuvers_propulsion_PythonThrustDirectionProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustDirectionProvider;
        }
      }
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class PythonThrustDirectionProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_computeThrustDirection_102e5d95cb32da9e,
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

            explicit PythonThrustDirectionProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonThrustDirectionProvider(const PythonThrustDirectionProvider& obj) : ::java::lang::Object(obj) {}

            PythonThrustDirectionProvider();

            ::org::hipparchus::geometry::euclidean::threed::Vector3D computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          extern PyType_Def PY_TYPE_DEF(PythonThrustDirectionProvider);
          extern PyTypeObject *PY_TYPE(PythonThrustDirectionProvider);

          class t_PythonThrustDirectionProvider {
          public:
            PyObject_HEAD
            PythonThrustDirectionProvider object;
            static PyObject *wrap_Object(const PythonThrustDirectionProvider&);
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
