#ifndef org_orekit_attitudes_GroundPointing_H
#define org_orekit_attitudes_GroundPointing_H

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

      class GroundPointing : public ::java::lang::Object {
       public:
        enum {
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitudeRotation_85bb0a19efdadc1d,
          mid_getAttitudeRotation_5c74bfcf2d42825a,
          mid_getBodyFrame_6c9bc0a928c56d4e,
          mid_getTargetPV_9e0119a6fef31431,
          mid_getTargetPV_ee00ab612436435b,
          mid_getTargetPosition_0ed0905f85ed7f56,
          mid_getTargetPosition_102e5d95cb32da9e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GroundPointing(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GroundPointing(const GroundPointing& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::frames::Frame getBodyFrame() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(GroundPointing);
      extern PyTypeObject *PY_TYPE(GroundPointing);

      class t_GroundPointing {
      public:
        PyObject_HEAD
        GroundPointing object;
        static PyObject *wrap_Object(const GroundPointing&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
