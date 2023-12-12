#ifndef org_orekit_utils_TimeStampedFieldPVCoordinates_H
#define org_orekit_utils_TimeStampedFieldPVCoordinates_H

#include "org/orekit/utils/FieldPVCoordinates.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class PVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class TimeScale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class FieldTimeStamped;
    }
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
    namespace utils {

      class TimeStampedFieldPVCoordinates : public ::org::orekit::utils::FieldPVCoordinates {
       public:
        enum {
          mid_init$_287992e1be2f741b,
          mid_init$_be4a763764fca433,
          mid_init$_3662f4f3d5ceb7b5,
          mid_init$_ba43a5f0914e9ada,
          mid_init$_787a95047ac068ac,
          mid_init$_dd3b29be3171ef13,
          mid_init$_af6d4d196c7a2c20,
          mid_init$_c051df2d044d00ed,
          mid_init$_a14a16331d5f2b77,
          mid_init$_264c2c939e537026,
          mid_init$_3f4828593e8baa0b,
          mid_init$_f6b7835da097715f,
          mid_init$_ba774aad389cff86,
          mid_init$_e632fd0ade92943b,
          mid_init$_55e8cbd742515bc1,
          mid_init$_5d4fba259711cb3f,
          mid_init$_ce0a5091dff76f76,
          mid_init$_4c91ace03dab7333,
          mid_init$_60d304cf92aedfe6,
          mid_init$_ecc4fb9310f8d0bd,
          mid_init$_68fb5b56ef6bbd86,
          mid_init$_c624442a4dc7968d,
          mid_init$_657c889ec221a7a4,
          mid_init$_25cfa2aa8962d285,
          mid_init$_2eb0156eea2a510a,
          mid_init$_97337ceb85d50c1a,
          mid_init$_fe39c48a4de0cba5,
          mid_init$_f447d39279cf90d3,
          mid_init$_af66ea9232dfcd29,
          mid_init$_381a7ac9b6d39968,
          mid_init$_efda25d1bdea6647,
          mid_init$_dabd12216765412e,
          mid_getDate_f1fe4daf77c66560,
          mid_shiftedBy_30b51fed958970f2,
          mid_shiftedBy_e68f08e83f93f159,
          mid_toString_3cffd47377eca18a,
          mid_toString_8873a127a4f312ad,
          mid_toTimeStampedPVCoordinates_daf15abc21907508,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedFieldPVCoordinates(jobject obj) : ::org::orekit::utils::FieldPVCoordinates(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedFieldPVCoordinates(const TimeStampedFieldPVCoordinates& obj) : ::org::orekit::utils::FieldPVCoordinates(obj) {}

        TimeStampedFieldPVCoordinates(const ::org::hipparchus::Field &, const ::org::orekit::utils::TimeStampedPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &, jdouble, const ::org::orekit::utils::FieldPVCoordinates &);
        TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);

        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        TimeStampedFieldPVCoordinates shiftedBy(jdouble) const;
        TimeStampedFieldPVCoordinates shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::java::lang::String toString() const;
        ::java::lang::String toString(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates toTimeStampedPVCoordinates() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedFieldPVCoordinates);
      extern PyTypeObject *PY_TYPE(TimeStampedFieldPVCoordinates);

      class t_TimeStampedFieldPVCoordinates {
      public:
        PyObject_HEAD
        TimeStampedFieldPVCoordinates object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedFieldPVCoordinates *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedFieldPVCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedFieldPVCoordinates&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
