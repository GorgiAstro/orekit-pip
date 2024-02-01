#ifndef org_orekit_attitudes_LofOffset_H
#define org_orekit_attitudes_LofOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class LOF;
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
          class FieldRotation;
          class Rotation;
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

      class LofOffset : public ::java::lang::Object {
       public:
        enum {
          mid_init$_01fbcbffb2ba401e,
          mid_init$_cd5879bef7a29ce5,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getAttitude_a02177519e1b6a45,
          mid_getAttitudeRotation_494718838b66cf03,
          mid_getAttitudeRotation_267252ddff45220c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LofOffset(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LofOffset(const LofOffset& obj) : ::java::lang::Object(obj) {}

        LofOffset(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::LOF &);
        LofOffset(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::LOF &, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, jdouble, jdouble, jdouble);

        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(LofOffset);
      extern PyTypeObject *PY_TYPE(LofOffset);

      class t_LofOffset {
      public:
        PyObject_HEAD
        LofOffset object;
        static PyObject *wrap_Object(const LofOffset&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
