#ifndef org_orekit_frames_LocalMagneticFieldFrame_H
#define org_orekit_frames_LocalMagneticFieldFrame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LocalMagneticFieldFrame$LOFBuilderVector;
      class LOF;
      class Frame;
    }
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_init$_c9bf6a3219f58a45,
          mid_init$_3a5c9b284bf02a3d,
          mid_getInertialFrame_cb151471db4570f0,
          mid_getMagneticField_839875beb9ae9174,
          mid_getName_d2c8eb4129821f0e,
          mid_rotationFromInertial_7972874aa60c5cbb,
          mid_rotationFromInertial_24d473279eeb35d9,
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
