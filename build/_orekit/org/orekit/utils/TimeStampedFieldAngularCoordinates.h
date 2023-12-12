#ifndef org_orekit_utils_TimeStampedFieldAngularCoordinates_H
#define org_orekit_utils_TimeStampedFieldAngularCoordinates_H

#include "org/orekit/utils/FieldAngularCoordinates.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class FieldPVCoordinates;
      class TimeStampedAngularCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class FieldTimeStamped;
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
          mid_init$_3e3c82b13e2cf201,
          mid_init$_354b52f41aeff9a4,
          mid_init$_47577ce34ad0612e,
          mid_init$_448839dff1f7f897,
          mid_init$_7d35ada25901a0df,
          mid_init$_a5863878b8b8d3e2,
          mid_addOffset_97721bc21cc7efe3,
          mid_getDate_f1fe4daf77c66560,
          mid_revert_6ee4b6b8d0c547ac,
          mid_shiftedBy_4f847e3a19f195cb,
          mid_shiftedBy_4f016eb855e53d73,
          mid_subtractOffset_97721bc21cc7efe3,
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
