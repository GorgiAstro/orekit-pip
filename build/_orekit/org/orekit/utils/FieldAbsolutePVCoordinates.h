#ifndef org_orekit_utils_FieldAbsolutePVCoordinates_H
#define org_orekit_utils_FieldAbsolutePVCoordinates_H

#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldAbsolutePVCoordinates;
      class FieldPVCoordinates;
      class AbsolutePVCoordinates;
      class FieldPVCoordinatesProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
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
          mid_init$_6c77220cdb0ea6df,
          mid_init$_31f1fe93c62865b4,
          mid_init$_ffffc3b35edcf862,
          mid_init$_1ecbc58634d61ebe,
          mid_init$_dcce67c0d72933b9,
          mid_init$_c33d21628d91e570,
          mid_init$_237419b68b55edce,
          mid_init$_4bbfe40ca6a1fb24,
          mid_init$_2ab935b9a04a47e7,
          mid_init$_8a8f4d2c2758b365,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getPVCoordinates_232470f1b769250c,
          mid_getPVCoordinates_52ae651ad18178ce,
          mid_getPVCoordinates_4ac52e75113a03db,
          mid_getPosition_b026e433cf2ed2d1,
          mid_shiftedBy_7bd46244f7d046c7,
          mid_shiftedBy_da445f13ea5e4505,
          mid_toAbsolutePVCoordinates_424b08369c4f1f64,
          mid_toTaylorProvider_dffb82756006eef9,
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
