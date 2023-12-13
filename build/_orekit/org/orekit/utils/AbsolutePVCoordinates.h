#ifndef org_orekit_utils_AbsolutePVCoordinates_H
#define org_orekit_utils_AbsolutePVCoordinates_H

#include "org/orekit/utils/TimeStampedPVCoordinates.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace utils {
      class AbsolutePVCoordinates;
      class PVCoordinatesProvider;
      class PVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
    namespace utils {

      class AbsolutePVCoordinates : public ::org::orekit::utils::TimeStampedPVCoordinates {
       public:
        enum {
          mid_init$_800c3dd335c0380a,
          mid_init$_fd2b0750660b1520,
          mid_init$_72cc8b5e799f1af2,
          mid_init$_cf7eb6bf40ec2784,
          mid_init$_863f1b02c8177428,
          mid_init$_ea4c48813d74fdbb,
          mid_init$_da876b03b47aa63e,
          mid_init$_d540dd032c580460,
          mid_init$_3e48dcefd2485625,
          mid_init$_57f438b019fb3492,
          mid_getFrame_2c51111cc6894ba1,
          mid_getPVCoordinates_136cc8ba23b21c29,
          mid_getPVCoordinates_03c7a0bca588a4f5,
          mid_getPVCoordinates_e5d15ef236cd9ffe,
          mid_getPosition_982d534f80d70918,
          mid_shiftedBy_e7e789aaa661e1b8,
          mid_toTaylorProvider_8a41319e47f3bd7c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbsolutePVCoordinates(jobject obj) : ::org::orekit::utils::TimeStampedPVCoordinates(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbsolutePVCoordinates(const AbsolutePVCoordinates& obj) : ::org::orekit::utils::TimeStampedPVCoordinates(obj) {}

        AbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::TimeStampedPVCoordinates &);
        AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate &, const AbsolutePVCoordinates &, const AbsolutePVCoordinates &);
        AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const AbsolutePVCoordinates &);
        AbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        AbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &);
        AbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const AbsolutePVCoordinates &, jdouble, const AbsolutePVCoordinates &);
        AbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const AbsolutePVCoordinates &, jdouble, const AbsolutePVCoordinates &, jdouble, const AbsolutePVCoordinates &);
        AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const AbsolutePVCoordinates &, jdouble, const AbsolutePVCoordinates &, jdouble, const AbsolutePVCoordinates &, jdouble, const AbsolutePVCoordinates &);

        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::frames::Frame &) const;
        AbsolutePVCoordinates shiftedBy(jdouble) const;
        ::org::orekit::utils::PVCoordinatesProvider toTaylorProvider() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AbsolutePVCoordinates);
      extern PyTypeObject *PY_TYPE(AbsolutePVCoordinates);

      class t_AbsolutePVCoordinates {
      public:
        PyObject_HEAD
        AbsolutePVCoordinates object;
        static PyObject *wrap_Object(const AbsolutePVCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
