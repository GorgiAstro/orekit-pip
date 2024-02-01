#ifndef org_orekit_utils_AbsolutePVCoordinates_H
#define org_orekit_utils_AbsolutePVCoordinates_H

#include "org/orekit/utils/TimeStampedPVCoordinates.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AbsolutePVCoordinates;
      class PVCoordinates;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
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
    namespace utils {

      class AbsolutePVCoordinates : public ::org::orekit::utils::TimeStampedPVCoordinates {
       public:
        enum {
          mid_init$_bf17706d61c7c060,
          mid_init$_ef9b4c9c65e8f64e,
          mid_init$_f18c63b6a877017a,
          mid_init$_73a746b7f0a60196,
          mid_init$_b2f0b252237d4955,
          mid_init$_7e4810973426bed8,
          mid_init$_8a92b49de3c6f304,
          mid_init$_0903a30af23ba460,
          mid_init$_52ae6364f8ffb9fd,
          mid_init$_5015ac2efa5365ae,
          mid_getFrame_cb151471db4570f0,
          mid_getPVCoordinates_674031698a428ce8,
          mid_getPVCoordinates_76634063992a70d7,
          mid_getPVCoordinates_6236a35378ed47a5,
          mid_getPosition_5996cdbecf4f0d06,
          mid_shiftedBy_7e13d9132ca7ef7d,
          mid_toTaylorProvider_781ab98286dad7d5,
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
