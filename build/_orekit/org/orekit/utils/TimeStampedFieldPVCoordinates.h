#ifndef org_orekit_utils_TimeStampedFieldPVCoordinates_H
#define org_orekit_utils_TimeStampedFieldPVCoordinates_H

#include "org/orekit/utils/FieldPVCoordinates.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class TimeScale;
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class TimeStampedPVCoordinates;
      class PVCoordinates;
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
          mid_init$_dce00f1bb2a9b447,
          mid_init$_fdb43bfa6d43366f,
          mid_init$_468ba0bc6c5bf070,
          mid_init$_ffeb9db3a56160f3,
          mid_init$_714680d7f2f36231,
          mid_init$_dad60168652e571f,
          mid_init$_94e86b986601fe86,
          mid_init$_9ff58311d7400e04,
          mid_init$_ce537fff2eb7dd83,
          mid_init$_5b99a056028b24a3,
          mid_init$_a77b68499c2a150f,
          mid_init$_988f6932842e45aa,
          mid_init$_fc453dab701d245e,
          mid_init$_22c42e194d2f9e41,
          mid_init$_5dbf64d84deeb0bb,
          mid_init$_46f6fdcb314b59b0,
          mid_init$_8b9453b84e578c27,
          mid_init$_b21aea609d95b4cb,
          mid_init$_85f69d1090230023,
          mid_init$_4d38f0699df00596,
          mid_init$_8c6df58dbf1792d4,
          mid_init$_4d3d873e2f48d623,
          mid_init$_80c668a1a390999a,
          mid_init$_d6e3c4b90386d014,
          mid_init$_1e4eb190a274ece1,
          mid_init$_413cfd58be4a8f36,
          mid_init$_e9cecda3f72174e4,
          mid_init$_2f69f97ab801d697,
          mid_init$_54db1fbb29425a19,
          mid_init$_f43979ec1613a752,
          mid_init$_d2d95c9364c6998f,
          mid_init$_8904b988a7471757,
          mid_getDate_51da00d5b8a3b5df,
          mid_shiftedBy_357c4c67143fefb2,
          mid_shiftedBy_653eb1a4934a2f6b,
          mid_toString_11b109bd155ca898,
          mid_toString_e3ec59f6a2ed4d7c,
          mid_toTimeStampedPVCoordinates_c204436deca11d94,
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
