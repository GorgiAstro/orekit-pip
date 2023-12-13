#ifndef org_orekit_utils_TimeStampedFieldPVCoordinates_H
#define org_orekit_utils_TimeStampedFieldPVCoordinates_H

#include "org/orekit/utils/FieldPVCoordinates.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class FieldTimeStamped;
      class TimeScale;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
      class TimeStampedFieldPVCoordinates;
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
    class Field;
    class CalculusFieldElement;
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
          mid_init$_a8bfd6ad44b787f3,
          mid_init$_cfc788dca6a8235d,
          mid_init$_dc699a7de0f37bf7,
          mid_init$_b19b60e39c50b506,
          mid_init$_6994897a320d907d,
          mid_init$_8e321282deb95025,
          mid_init$_40c2a76141cc9860,
          mid_init$_d2c8e93461a601ac,
          mid_init$_3cb5ec6833cdf23f,
          mid_init$_381a4ecdb8fd3a35,
          mid_init$_b3a0c531ef4cb80d,
          mid_init$_1d369cfda8906471,
          mid_init$_afebadf13f26164f,
          mid_init$_4b2d668898c102f2,
          mid_init$_e54f6b601b347d30,
          mid_init$_47bd782156c58a6e,
          mid_init$_fde1eabc1afd00a9,
          mid_init$_0302a7d74ec18402,
          mid_init$_9b8d2f22281e263c,
          mid_init$_d3ace86dfc4fff67,
          mid_init$_7be77f8a0e6f26b1,
          mid_init$_96ee45abc6c523c9,
          mid_init$_d6804e188ec0c16f,
          mid_init$_3760ed8939cf69da,
          mid_init$_8c5e7fefe4a79b68,
          mid_init$_20e893655c6f85d0,
          mid_init$_eeefa546ece94c1c,
          mid_init$_34c1cadd913c26a5,
          mid_init$_c1896ea3ed563785,
          mid_init$_6f8d22976d3a6e18,
          mid_init$_e58f765a3e221501,
          mid_init$_51644ef4bc2dd8e9,
          mid_getDate_fa23a4301b9c83e7,
          mid_shiftedBy_a479dbc1b53ce443,
          mid_shiftedBy_8a2825d4f6c40ffa,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toString_2ee13d9bd10373d0,
          mid_toTimeStampedPVCoordinates_136cc8ba23b21c29,
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
