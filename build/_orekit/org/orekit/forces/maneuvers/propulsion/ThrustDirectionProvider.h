#ifndef org_orekit_forces_maneuvers_propulsion_ThrustDirectionProvider_H
#define org_orekit_forces_maneuvers_propulsion_ThrustDirectionProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class ThrustDirectionProvider : public ::java::lang::Object {
           public:
            enum {
              mid_computeThrustDirection_f778d81301c7076a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThrustDirectionProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ThrustDirectionProvider(const ThrustDirectionProvider& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::geometry::euclidean::threed::Vector3D computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
          extern PyType_Def PY_TYPE_DEF(ThrustDirectionProvider);
          extern PyTypeObject *PY_TYPE(ThrustDirectionProvider);

          class t_ThrustDirectionProvider {
          public:
            PyObject_HEAD
            ThrustDirectionProvider object;
            static PyObject *wrap_Object(const ThrustDirectionProvider&);
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
