#ifndef org_orekit_frames_LOFType_H
#define org_orekit_frames_LOFType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OrbitRelativeFrame;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class LOFType;
      class LOF;
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
          mid_getName_1c1fa1e935d6cdcf,
          mid_rotationFromInertial_7e9d52385b0ba3f0,
          mid_rotationFromInertial_9c03210e4a66b8b3,
          mid_rotationFromInertial_80cbd49af33092b8,
          mid_rotationFromInertial_8f928c19e9edde2b,
          mid_rotationFromLOF_404fd1e1ee7a0f99,
          mid_rotationFromLOF_8e169a23d8373027,
          mid_toOrbitRelativeFrame_77481b528a1ae805,
          mid_valueOf_2862ff6fc1bb5941,
          mid_values_20b2193d6f06e063,
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
