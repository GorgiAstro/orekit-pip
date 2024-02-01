#ifndef org_orekit_attitudes_SpinStabilized_H
#define org_orekit_attitudes_SpinStabilized_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class AttitudeProviderModifier;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_init$_a79f3bfa422e2758,
          mid_getAttitude_a02177519e1b6a45,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c,
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
