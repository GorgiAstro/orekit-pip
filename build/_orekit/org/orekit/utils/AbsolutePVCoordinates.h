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
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class PVCoordinatesProvider;
      class PVCoordinates;
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
          mid_init$_0daa668827680b8e,
          mid_init$_5149c5d601d1b99c,
          mid_init$_9204b33858544bf0,
          mid_init$_a91babafba973925,
          mid_init$_fa9ab2460e66166d,
          mid_init$_292536b29942aed7,
          mid_init$_cc3081536a71c211,
          mid_init$_f2a1bf0b29b61ed3,
          mid_init$_4e298926d9652ffd,
          mid_init$_355d9810ccc5dfdd,
          mid_getFrame_b86f9f61d97a7244,
          mid_getPVCoordinates_c204436deca11d94,
          mid_getPVCoordinates_d9ebf50b8aebcbf9,
          mid_getPVCoordinates_cfeec55f7c63ec64,
          mid_getPosition_e91e859b879f3586,
          mid_shiftedBy_62e71a9085e39e01,
          mid_toTaylorProvider_903aca6bb4523e29,
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
