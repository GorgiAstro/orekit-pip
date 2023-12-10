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
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinates;
      class AbsolutePVCoordinates;
      class PVCoordinatesProvider;
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
          mid_init$_ff9fd98331524d51,
          mid_init$_0eec03e55122ebdc,
          mid_init$_70f5c52158b765f7,
          mid_init$_462992fac2efc3b7,
          mid_init$_0893ff3cc15239ef,
          mid_init$_4f0bb5235d197aa3,
          mid_init$_865781d7505fa0be,
          mid_init$_2159411e0e643717,
          mid_init$_2afa6e9b5b8d0710,
          mid_init$_71eef8c16a449bcf,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getPVCoordinates_6890805957bea2cd,
          mid_getPVCoordinates_f8a365e30a3ddce1,
          mid_getPVCoordinates_20557c175f7cd899,
          mid_getPosition_b070efa02e5e2595,
          mid_shiftedBy_0b61f5e41010d518,
          mid_toTaylorProvider_7044cb1966c8a481,
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
