#ifndef org_orekit_forces_maneuvers_propulsion_ConstantThrustDirectionProvider_H
#define org_orekit_forces_maneuvers_propulsion_ConstantThrustDirectionProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustDirectionProvider;
        }
      }
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

          class ConstantThrustDirectionProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_30f8886dfb88a63c,
              mid_computeThrustDirection_f778d81301c7076a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConstantThrustDirectionProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConstantThrustDirectionProvider(const ConstantThrustDirectionProvider& obj) : ::java::lang::Object(obj) {}

            ConstantThrustDirectionProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

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
          extern PyType_Def PY_TYPE_DEF(ConstantThrustDirectionProvider);
          extern PyTypeObject *PY_TYPE(ConstantThrustDirectionProvider);

          class t_ConstantThrustDirectionProvider {
          public:
            PyObject_HEAD
            ConstantThrustDirectionProvider object;
            static PyObject *wrap_Object(const ConstantThrustDirectionProvider&);
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
