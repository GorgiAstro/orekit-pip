#ifndef org_orekit_utils_FieldAbsolutePVCoordinates_H
#define org_orekit_utils_FieldAbsolutePVCoordinates_H

#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"

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
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class FieldPVCoordinatesProvider;
      class FieldPVCoordinates;
      class FieldAbsolutePVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
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

      class FieldAbsolutePVCoordinates : public ::org::orekit::utils::TimeStampedFieldPVCoordinates {
       public:
        enum {
          mid_init$_74ead997d56fb57d,
          mid_init$_7fbe60a14a017b36,
          mid_init$_3968685f3cfde387,
          mid_init$_157e0412941b659e,
          mid_init$_d8a2a240753d0d6b,
          mid_init$_c20373b9658fec77,
          mid_init$_be3f7fa2cc96b877,
          mid_init$_950d0e907b47dcae,
          mid_init$_d2fe6d0d922f371d,
          mid_init$_f0f2f7e8c4812fcf,
          mid_getFrame_b86f9f61d97a7244,
          mid_getPVCoordinates_f89522ff77904397,
          mid_getPVCoordinates_f7bcbf2fe13428b6,
          mid_getPVCoordinates_2cdae1c350dc3e9a,
          mid_getPosition_f336610fe073f215,
          mid_shiftedBy_1e9400b30e4a1955,
          mid_shiftedBy_5fb9177ede99debe,
          mid_toAbsolutePVCoordinates_3484f681e5893171,
          mid_toTaylorProvider_d973c40fc0211a5b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAbsolutePVCoordinates(jobject obj) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAbsolutePVCoordinates(const FieldAbsolutePVCoordinates& obj) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(obj) {}

        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::TimeStampedFieldPVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const FieldAbsolutePVCoordinates &, const FieldAbsolutePVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &);

        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition(const ::org::orekit::frames::Frame &) const;
        FieldAbsolutePVCoordinates shiftedBy(jdouble) const;
        FieldAbsolutePVCoordinates shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::utils::AbsolutePVCoordinates toAbsolutePVCoordinates() const;
        ::org::orekit::utils::FieldPVCoordinatesProvider toTaylorProvider() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldAbsolutePVCoordinates);
      extern PyTypeObject *PY_TYPE(FieldAbsolutePVCoordinates);

      class t_FieldAbsolutePVCoordinates {
      public:
        PyObject_HEAD
        FieldAbsolutePVCoordinates object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAbsolutePVCoordinates *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAbsolutePVCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAbsolutePVCoordinates&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
