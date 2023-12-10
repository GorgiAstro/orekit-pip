#ifndef org_orekit_frames_LocalMagneticFieldFrame_H
#define org_orekit_frames_LocalMagneticFieldFrame_H

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
    class Field;
  }
  namespace orekit {
    namespace frames {
      class LocalMagneticFieldFrame$LOFBuilderVector;
      class Frame;
      class LOF;
    }
    namespace models {
      namespace earth {
        class GeoMagneticField;
      }
    }
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
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
          mid_init$_e10339a361902022,
          mid_init$_d350d92215d291fa,
          mid_getInertialFrame_c8fe21bcdac65bf6,
          mid_getMagneticField_b16f46e2ba1f1c67,
          mid_getName_0090f7797e403f43,
          mid_rotationFromInertial_95b12e29918a648c,
          mid_rotationFromInertial_346e8a02c9c839ea,
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
