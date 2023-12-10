#ifndef org_orekit_utils_TimeStampedFieldPVCoordinates_H
#define org_orekit_utils_TimeStampedFieldPVCoordinates_H

#include "org/orekit/utils/FieldPVCoordinates.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class TimeStampedPVCoordinates;
    }
  }
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
          mid_init$_b1c8d3cf31a209c8,
          mid_init$_9d73fcce6fcf904f,
          mid_init$_ee45717687c334a1,
          mid_init$_29687ccd72f81db7,
          mid_init$_bc0c5d85c500b363,
          mid_init$_b3e0cf3f2bef484f,
          mid_init$_a7c3f2b802f2db19,
          mid_init$_6260e7f6da29fe75,
          mid_init$_d0c1b0d49789b04e,
          mid_init$_2d474ab088998677,
          mid_init$_ab467c578aeb0695,
          mid_init$_9e18b273511ec44d,
          mid_init$_41aed52df58da4c8,
          mid_init$_c04c30a2fab87285,
          mid_init$_d08eb949e98d2dc4,
          mid_init$_84c0e286a125f2e2,
          mid_init$_4be426556130efe9,
          mid_init$_67ea9f8ae6111d1a,
          mid_init$_a7f2bbdda4dc1b16,
          mid_init$_048bd8b32a48640f,
          mid_init$_cabf2962353e1085,
          mid_init$_6a27dde5ab963807,
          mid_init$_7e283ae1c4bc5ea8,
          mid_init$_6bb89ff51f7530c3,
          mid_init$_4dd6274a018a92b8,
          mid_init$_7902f1a23e6aac2c,
          mid_init$_60fadd4075574780,
          mid_init$_f27684a4091d505a,
          mid_init$_f4fc8f4b85ea4711,
          mid_init$_8231b6d93a7177ae,
          mid_init$_5768bd432ddf045c,
          mid_init$_4ef6f716d4feba44,
          mid_getDate_09b0a926600dfc14,
          mid_shiftedBy_2a8ded55216f7b91,
          mid_shiftedBy_ebe9b9ae8b056235,
          mid_toString_0090f7797e403f43,
          mid_toString_44577b71ebe5fefb,
          mid_toTimeStampedPVCoordinates_6890805957bea2cd,
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
