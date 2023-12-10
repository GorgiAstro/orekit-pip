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
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
      class Attitude;
      class FieldAttitude;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
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
          mid_init$_897939f7cf621023,
          mid_init$_b1992bd1bb70f476,
          mid_init$_e1d486da686f0811,
          mid_getAttitude_5341a8481841f90c,
          mid_getAttitude_455b5c75f9292826,
          mid_getAttitudeRotation_969253bc78d7a272,
          mid_getAttitudeRotation_01363f58d35f60d4,
          mid_of_ab8f9c0c395d2e45,
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
