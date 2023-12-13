#ifndef org_orekit_attitudes_FrameAlignedProvider_H
#define org_orekit_attitudes_FrameAlignedProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class FieldAttitude;
      class Attitude;
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
          class FieldRotation;
          class Rotation;
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

      class FrameAlignedProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f32de4638c68c05a,
          mid_init$_237ae1c2ddd68062,
          mid_init$_f43ca627e733b5ae,
          mid_getAttitude_21845cfb0034fe1c,
          mid_getAttitude_896ee4d68989b1e8,
          mid_getAttitudeRotation_1bc07ea175743b30,
          mid_getAttitudeRotation_6acae55a2f5d3ab4,
          mid_of_90b35c894f9743d5,
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
