#ifndef org_orekit_attitudes_SpinStabilized_H
#define org_orekit_attitudes_SpinStabilized_H

#include "java/lang/Object.h"

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
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
      class Attitude;
      class FieldAttitude;
      class AttitudeProviderModifier;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
    namespace attitudes {

      class SpinStabilized : public ::java::lang::Object {
       public:
        enum {
          mid_init$_857c20ed04bf2568,
          mid_getAttitude_5341a8481841f90c,
          mid_getAttitude_455b5c75f9292826,
          mid_getUnderlyingAttitudeProvider_5cce95036ae870ba,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SpinStabilized(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SpinStabilized(const SpinStabilized& obj) : ::java::lang::Object(obj) {}

        SpinStabilized(const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::AttitudeProvider getUnderlyingAttitudeProvider() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(SpinStabilized);
      extern PyTypeObject *PY_TYPE(SpinStabilized);

      class t_SpinStabilized {
      public:
        PyObject_HEAD
        SpinStabilized object;
        static PyObject *wrap_Object(const SpinStabilized&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
