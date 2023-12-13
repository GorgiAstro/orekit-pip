#ifndef org_orekit_frames_LocalMagneticFieldFrame_H
#define org_orekit_frames_LocalMagneticFieldFrame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class LocalMagneticFieldFrame$LOFBuilderVector;
      class LOF;
      class Frame;
    }
    namespace models {
      namespace earth {
        class GeoMagneticField;
      }
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
          mid_init$_86179a66f95f2dd8,
          mid_init$_a0d185198633bdd4,
          mid_getInertialFrame_2c51111cc6894ba1,
          mid_getMagneticField_7e28d517d0d29909,
          mid_getName_1c1fa1e935d6cdcf,
          mid_rotationFromInertial_9c03210e4a66b8b3,
          mid_rotationFromInertial_8f928c19e9edde2b,
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
