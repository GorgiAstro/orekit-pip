#ifndef org_orekit_attitudes_LofOffset_H
#define org_orekit_attitudes_LofOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
          class RotationOrder;
        }
      }
    }
  }
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class AttitudeProvider;
    }
    namespace frames {
      class Frame;
      class LOF;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_init$_d0da994ef99ba2d6,
          mid_init$_47a098327b6c6c38,
          mid_getAttitude_4e541876ea7d5bd0,
          mid_getAttitude_d2b70935d932b5c5,
          mid_getAttitudeRotation_53a81d4d17b13463,
          mid_getAttitudeRotation_29422c22de775b74,
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
