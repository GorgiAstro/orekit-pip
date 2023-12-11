#ifndef org_orekit_frames_LOFType_H
#define org_orekit_frames_LOFType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOF;
      class LOFType;
    }
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OrbitRelativeFrame;
        }
      }
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
          mid_getName_3cffd47377eca18a,
          mid_rotationFromInertial_8b424804999938a4,
          mid_rotationFromInertial_9b71bf39454b4a07,
          mid_rotationFromInertial_352d2666b9e583bd,
          mid_rotationFromInertial_1022f468fb3d1015,
          mid_rotationFromLOF_8d5767b4634d801e,
          mid_rotationFromLOF_6bc33cb92fb35718,
          mid_toOrbitRelativeFrame_8f84f1568afeba4e,
          mid_valueOf_60012f35de3d5983,
          mid_values_021586431706f290,
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
