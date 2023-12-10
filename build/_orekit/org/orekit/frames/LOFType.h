#ifndef org_orekit_frames_LOFType_H
#define org_orekit_frames_LOFType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOFType;
      class LOF;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OrbitRelativeFrame;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
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

      class LOFType : public ::java::lang::Enum {
       public:
        enum {
          mid_getName_11b109bd155ca898,
          mid_rotationFromInertial_48dfcf66fb3ed19c,
          mid_rotationFromInertial_475182fd71c6851b,
          mid_rotationFromInertial_00be22c00009a46d,
          mid_rotationFromInertial_076f35c1feeb36b3,
          mid_rotationFromLOF_af58d526d9fa9835,
          mid_rotationFromLOF_59306c62a2dda902,
          mid_toOrbitRelativeFrame_65b7b6f762019366,
          mid_valueOf_5eea000864e605d6,
          mid_values_78c6da1ecdb315dd,
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
