#ifndef org_orekit_utils_AbsolutePVCoordinates_H
#define org_orekit_utils_AbsolutePVCoordinates_H

#include "org/orekit/utils/TimeStampedPVCoordinates.h"

namespace org {
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
  namespace orekit {
    namespace utils {
      class PVCoordinates;
      class PVCoordinatesProvider;
      class AbsolutePVCoordinates;
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
          mid_init$_a1fd02f06b657f28,
          mid_init$_76db051720408dec,
          mid_init$_9843b99b5e658838,
          mid_init$_243f7b18c367ef6e,
          mid_init$_745e3e9bf9e580ce,
          mid_init$_a40d3c1c906792a4,
          mid_init$_0f6c145f52314e2c,
          mid_init$_e35ea6ed1126bff5,
          mid_init$_7e1773b50a3ff7d2,
          mid_init$_f7f3bf23e900bdc6,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getPVCoordinates_daf15abc21907508,
          mid_getPVCoordinates_8cf7b972bef1e4d8,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_getPosition_8386213426308de8,
          mid_shiftedBy_1e0bd76edd81d64f,
          mid_toTaylorProvider_dec199e86bf037eb,
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
