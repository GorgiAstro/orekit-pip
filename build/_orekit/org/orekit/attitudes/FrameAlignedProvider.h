#ifndef org_orekit_attitudes_FrameAlignedProvider_H
#define org_orekit_attitudes_FrameAlignedProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class AttitudeProvider;
      class FieldAttitude;
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
          class Rotation;
          class FieldRotation;
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
          mid_init$_cffe2196131a8abb,
          mid_init$_535d1f91a93c8b4d,
          mid_init$_5aed8d3c9ea07a80,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitudeRotation_85bb0a19efdadc1d,
          mid_getAttitudeRotation_5c74bfcf2d42825a,
          mid_of_cdc4e41e4b95cd96,
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
