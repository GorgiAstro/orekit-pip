#ifndef org_orekit_utils_FieldAbsolutePVCoordinates_H
#define org_orekit_utils_FieldAbsolutePVCoordinates_H

#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"

namespace org {
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
          mid_init$_df81e043e926a013,
          mid_init$_43f93b28b797951a,
          mid_init$_380e3285128bd3ab,
          mid_init$_6915f38f9d73a4da,
          mid_init$_84e2abc75a0ef1a2,
          mid_init$_a332af9e0c5473c5,
          mid_init$_13df4cca0dae3be7,
          mid_init$_8ee2135f18ca0852,
          mid_init$_10206186abe24235,
          mid_init$_316d0b5400379728,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getPVCoordinates_26447a781aafdb9e,
          mid_getPVCoordinates_485af6605091d545,
          mid_getPVCoordinates_0e277b7d6a64b75a,
          mid_getPosition_863ec0d27d7d92bb,
          mid_shiftedBy_65569f14a206711d,
          mid_shiftedBy_b506c770a1be56c1,
          mid_toAbsolutePVCoordinates_821da029915a6e75,
          mid_toTaylorProvider_d265659654cb169e,
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
