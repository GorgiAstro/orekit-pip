#ifndef org_orekit_utils_TimeStampedFieldAngularCoordinates_H
#define org_orekit_utils_TimeStampedFieldAngularCoordinates_H

#include "org/orekit/utils/FieldAngularCoordinates.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class TimeStampedAngularCoordinates;
      class FieldPVCoordinates;
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

      class TimeStampedFieldAngularCoordinates : public ::org::orekit::utils::FieldAngularCoordinates {
       public:
        enum {
          mid_init$_e15b020416400437,
          mid_init$_e1a7392be9254a79,
          mid_init$_fbe0d61f3942c09c,
          mid_init$_f953797f92c3fc12,
          mid_init$_b7eb08ec687e53fa,
          mid_init$_a26a60053d31b138,
          mid_addOffset_e1547cbee1589e0c,
          mid_getDate_09b0a926600dfc14,
          mid_revert_3a64e8ea05af639a,
          mid_shiftedBy_22bd2763ea870f72,
          mid_shiftedBy_6020a51044d9cf6b,
          mid_subtractOffset_e1547cbee1589e0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedFieldAngularCoordinates(jobject obj) : ::org::orekit::utils::FieldAngularCoordinates(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedFieldAngularCoordinates(const TimeStampedFieldAngularCoordinates& obj) : ::org::orekit::utils::FieldAngularCoordinates(obj) {}

        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &);
        TimeStampedFieldAngularCoordinates(const ::org::hipparchus::Field &, const ::org::orekit::utils::TimeStampedAngularCoordinates &);
        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, jdouble);
        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, jdouble);

        TimeStampedFieldAngularCoordinates addOffset(const ::org::orekit::utils::FieldAngularCoordinates &) const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        TimeStampedFieldAngularCoordinates revert() const;
        TimeStampedFieldAngularCoordinates shiftedBy(jdouble) const;
        TimeStampedFieldAngularCoordinates shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        TimeStampedFieldAngularCoordinates subtractOffset(const ::org::orekit::utils::FieldAngularCoordinates &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedFieldAngularCoordinates);
      extern PyTypeObject *PY_TYPE(TimeStampedFieldAngularCoordinates);

      class t_TimeStampedFieldAngularCoordinates {
      public:
        PyObject_HEAD
        TimeStampedFieldAngularCoordinates object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedFieldAngularCoordinates *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedFieldAngularCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedFieldAngularCoordinates&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
