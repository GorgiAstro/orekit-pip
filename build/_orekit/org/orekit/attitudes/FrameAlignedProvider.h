#ifndef org_orekit_attitudes_FrameAlignedProvider_H
#define org_orekit_attitudes_FrameAlignedProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
        }
      }
    }
  }
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class AttitudeProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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

      class FrameAlignedProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_80a55d93aa5ecb9e,
          mid_init$_b5680f5c30eede66,
          mid_init$_7425adc369986a54,
          mid_getAttitude_d2b70935d932b5c5,
          mid_getAttitude_4e541876ea7d5bd0,
          mid_getAttitudeRotation_53a81d4d17b13463,
          mid_getAttitudeRotation_29422c22de775b74,
          mid_of_645fb86928f8f669,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FrameAlignedProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FrameAlignedProvider(const FrameAlignedProvider& obj) : ::java::lang::Object(obj) {}

        FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation &);
        FrameAlignedProvider(const ::org::orekit::frames::Frame &);
        FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::orekit::frames::Frame &);

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        static ::org::orekit::attitudes::AttitudeProvider of(const ::org::orekit::frames::Frame &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(FrameAlignedProvider);
      extern PyTypeObject *PY_TYPE(FrameAlignedProvider);

      class t_FrameAlignedProvider {
      public:
        PyObject_HEAD
        FrameAlignedProvider object;
        static PyObject *wrap_Object(const FrameAlignedProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
