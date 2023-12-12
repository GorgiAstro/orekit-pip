#ifndef org_orekit_frames_LocalMagneticFieldFrame_H
#define org_orekit_frames_LocalMagneticFieldFrame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticField;
      }
    }
    namespace frames {
      class LOF;
      class LocalMagneticFieldFrame$LOFBuilderVector;
      class Frame;
    }
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
    class Field;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class LocalMagneticFieldFrame : public ::java::lang::Object {
       public:
        enum {
          mid_init$_61dfbe8afb534db1,
          mid_init$_81aa3b2ad79095bc,
          mid_getInertialFrame_6c9bc0a928c56d4e,
          mid_getMagneticField_2d6050bd3aec87f1,
          mid_getName_3cffd47377eca18a,
          mid_rotationFromInertial_9b71bf39454b4a07,
          mid_rotationFromInertial_1022f468fb3d1015,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalMagneticFieldFrame(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalMagneticFieldFrame(const LocalMagneticFieldFrame& obj) : ::java::lang::Object(obj) {}

        LocalMagneticFieldFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::models::earth::GeoMagneticField &, const ::org::orekit::frames::Frame &);
        LocalMagneticFieldFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::models::earth::GeoMagneticField &, const ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector &, const ::org::orekit::frames::Frame &);

        ::org::orekit::frames::Frame getInertialFrame() const;
        ::org::orekit::models::earth::GeoMagneticField getMagneticField() const;
        ::java::lang::String getName() const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(LocalMagneticFieldFrame);
      extern PyTypeObject *PY_TYPE(LocalMagneticFieldFrame);

      class t_LocalMagneticFieldFrame {
      public:
        PyObject_HEAD
        LocalMagneticFieldFrame object;
        static PyObject *wrap_Object(const LocalMagneticFieldFrame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
