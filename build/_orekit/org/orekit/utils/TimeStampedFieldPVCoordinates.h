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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
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
          mid_init$_67f19636afd354be,
          mid_init$_fa09e46e873e726a,
          mid_init$_0aa97ac04cede617,
          mid_init$_994d2e3578155e05,
          mid_init$_1a643e79f8e148bf,
          mid_init$_c5ff1427ec3d1116,
          mid_init$_3727e4ad54f75af6,
          mid_init$_3ce2060bf23bfdba,
          mid_init$_22937e1c2243bbfd,
          mid_init$_e4999eef1065a80e,
          mid_init$_4979dae8269d6e84,
          mid_init$_05488b58b8e5070e,
          mid_init$_527134f2ef873c5d,
          mid_init$_8a2daddc92952c07,
          mid_init$_6c4c5dbb58428c5a,
          mid_init$_18944c3417d2fba1,
          mid_init$_d07c68156b6b32fc,
          mid_init$_d7882b8b569c0f77,
          mid_init$_57a6988f279dd38f,
          mid_init$_5816a44d07f5b717,
          mid_init$_60cd0f63dd8015dc,
          mid_init$_d1c86b0bd31e465b,
          mid_init$_32a527f3c9518a1f,
          mid_init$_35571423c15035de,
          mid_init$_51e267ce44ff6788,
          mid_init$_c9a341eb582f3af4,
          mid_init$_794bbb26cedc53bd,
          mid_init$_19ac316c55ba33ef,
          mid_init$_73e2ba3fc21278cb,
          mid_init$_5766c04e4da44017,
          mid_init$_af1559da377c492d,
          mid_init$_5e6c70bdd0997f96,
          mid_getDate_1fea28374011eef5,
          mid_shiftedBy_322ad30e77cef5ec,
          mid_shiftedBy_a7d0251e989dd50a,
          mid_toString_d2c8eb4129821f0e,
          mid_toString_244ea083ab9940d6,
          mid_toTimeStampedPVCoordinates_674031698a428ce8,
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
