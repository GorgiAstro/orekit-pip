#ifndef org_orekit_frames_LOFType_H
#define org_orekit_frames_LOFType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OrbitRelativeFrame;
        }
      }
    }
    namespace frames {
      class LOF;
      class LOFType;
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

      class LOFType : public ::java::lang::Enum {
       public:
        enum {
          mid_getName_d2c8eb4129821f0e,
          mid_rotationFromInertial_cc3fb55bcf18d696,
          mid_rotationFromInertial_7972874aa60c5cbb,
          mid_rotationFromInertial_5554d692f1f7262c,
          mid_rotationFromInertial_24d473279eeb35d9,
          mid_rotationFromLOF_d019077181b15d7c,
          mid_rotationFromLOF_fe2c3136d84f9aa0,
          mid_toOrbitRelativeFrame_0b1c57b4ded01423,
          mid_valueOf_87e2aee94565a158,
          mid_values_9c1d3d046d18c81c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LOFType(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LOFType(const LOFType& obj) : ::java::lang::Enum(obj) {}

        static LOFType *EQW;
        static LOFType *LVLH;
        static LOFType *LVLH_CCSDS;
        static LOFType *LVLH_CCSDS_INERTIAL;
        static LOFType *LVLH_INERTIAL;
        static LOFType *NTW;
        static LOFType *NTW_INERTIAL;
        static LOFType *QSW;
        static LOFType *QSW_INERTIAL;
        static LOFType *TNW;
        static LOFType *TNW_INERTIAL;
        static LOFType *VNC;
        static LOFType *VNC_INERTIAL;
        static LOFType *VVLH;
        static LOFType *VVLH_INERTIAL;

        ::java::lang::String getName() const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::utils::PVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromLOF(const LOFType &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromLOF(const ::org::hipparchus::Field &, const LOFType &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame toOrbitRelativeFrame() const;
        static LOFType valueOf(const ::java::lang::String &);
        static JArray< LOFType > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(LOFType);
      extern PyTypeObject *PY_TYPE(LOFType);

      class t_LOFType {
      public:
        PyObject_HEAD
        LOFType object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LOFType *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LOFType&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LOFType&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
