#ifndef org_orekit_attitudes_SpinStabilized_H
#define org_orekit_attitudes_SpinStabilized_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class AttitudeProvider;
      class FieldAttitude;
      class AttitudeProviderModifier;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
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
          mid_init$_8f0a7a57ebfb39ba,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitude_77e3383de01f3e48,
          mid_getUnderlyingAttitudeProvider_6df6b78ab9377151,
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
