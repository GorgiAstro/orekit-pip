#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/UpdatableFrame.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *UpdatableFrame::class$ = NULL;
      jmethodID *UpdatableFrame::mids$ = NULL;
      bool UpdatableFrame::live$ = false;

      jclass UpdatableFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/UpdatableFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_03e04995a6531dd6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_066cbc733c0a5e57] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_updateTransform_4b30d7911a9905e9] = env->getMethodID(cls, "updateTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Lorg/orekit/time/AbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_03e04995a6531dd6, a0.this$, a1.this$, a2.this$)) {}

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_066cbc733c0a5e57, a0.this$, a1.this$, a2.this$, a3)) {}

      void UpdatableFrame::updateTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_updateTransform_4b30d7911a9905e9], a0.this$, a1.this$, a2.this$, a3.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args);

      static PyMethodDef t_UpdatableFrame__methods_[] = {
        DECLARE_METHOD(t_UpdatableFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, updateTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UpdatableFrame)[] = {
        { Py_tp_methods, t_UpdatableFrame__methods_ },
        { Py_tp_init, (void *) t_UpdatableFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UpdatableFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(UpdatableFrame, t_UpdatableFrame, UpdatableFrame);

      void t_UpdatableFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(UpdatableFrame), &PY_TYPE_DEF(UpdatableFrame), module, "UpdatableFrame", 0);
      }

      void t_UpdatableFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "class_", make_descriptor(UpdatableFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "wrapfn_", make_descriptor(t_UpdatableFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UpdatableFrame::initializeClass, 1)))
          return NULL;
        return t_UpdatableFrame::wrap_Object(UpdatableFrame(((t_UpdatableFrame *) arg)->object.this$));
      }
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UpdatableFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::frames::Transform a2((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a3((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.updateTransform(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "updateTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefinedWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefinedWriter::class$ = NULL;
            jmethodID *UserDefinedWriter::mids$ = NULL;
            bool UserDefinedWriter::live$ = false;

            jclass UserDefinedWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefinedWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_afcce89ce269e798] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedWriter::UserDefinedWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_afcce89ce269e798, a0.this$, a1.this$, a2.this$)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_UserDefinedWriter__methods_[] = {
              DECLARE_METHOD(t_UserDefinedWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedWriter)[] = {
              { Py_tp_methods, t_UserDefinedWriter__methods_ },
              { Py_tp_init, (void *) t_UserDefinedWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(UserDefinedWriter, t_UserDefinedWriter, UserDefinedWriter);

            void t_UserDefinedWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedWriter), &PY_TYPE_DEF(UserDefinedWriter), module, "UserDefinedWriter", 0);
            }

            void t_UserDefinedWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "class_", make_descriptor(UserDefinedWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "wrapfn_", make_descriptor(t_UserDefinedWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedWriter::initializeClass, 1)))
                return NULL;
              return t_UserDefinedWriter::wrap_Object(UserDefinedWriter(((t_UserDefinedWriter *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a2((jobject) NULL);
              UserDefinedWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UserDefinedWriter(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ParameterValidator::class$ = NULL;
            jmethodID *ParameterValidator::mids$ = NULL;
            bool ParameterValidator::live$ = false;

            jclass ParameterValidator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_validate_613347e28dd909cd] = env->getMethodID(cls, "validate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealVector ParameterValidator::validate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_validate_613347e28dd909cd], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg);

            static PyMethodDef t_ParameterValidator__methods_[] = {
              DECLARE_METHOD(t_ParameterValidator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParameterValidator)[] = {
              { Py_tp_methods, t_ParameterValidator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParameterValidator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParameterValidator, t_ParameterValidator, ParameterValidator);

            void t_ParameterValidator::install(PyObject *module)
            {
              installType(&PY_TYPE(ParameterValidator), &PY_TYPE_DEF(ParameterValidator), module, "ParameterValidator", 0);
            }

            void t_ParameterValidator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "class_", make_descriptor(ParameterValidator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "wrapfn_", make_descriptor(t_ParameterValidator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParameterValidator::initializeClass, 1)))
                return NULL;
              return t_ParameterValidator::wrap_Object(ParameterValidator(((t_ParameterValidator *) arg)->object.this$));
            }
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParameterValidator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.validate(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "validate", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Constants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Constants::class$ = NULL;
      jmethodID *Constants::mids$ = NULL;
      bool Constants::live$ = false;
      jdouble Constants::ARC_SECONDS_TO_RADIANS = (jdouble) 0;
      jdouble Constants::BESSELIAN_YEAR = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_MU = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_MU = (jdouble) 0;
      jdouble Constants::G0_STANDARD_GRAVITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C30 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C40 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C50 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C60 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_MU = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_MU = (jdouble) 0;
      jdouble Constants::IAU_2012_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SOLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SUN_GM = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_MU = (jdouble) 0;
      jdouble Constants::JPL_SSD_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_PLUS_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = (jdouble) 0;
      jdouble Constants::JPL_SSD_JUPITER_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MARS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MERCURY_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_NEPTUNE_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_PLUTO_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SATURN_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_VENUS_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_URANUS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_VENUS_GM = (jdouble) 0;
      jdouble Constants::JULIAN_CENTURY = (jdouble) 0;
      jdouble Constants::JULIAN_DAY = (jdouble) 0;
      jdouble Constants::JULIAN_YEAR = (jdouble) 0;
      jdouble Constants::MOON_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::SPEED_OF_LIGHT = (jdouble) 0;
      jdouble Constants::SUN_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_C20 = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_MU = (jdouble) 0;

      jclass Constants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Constants");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS_TO_RADIANS = env->getStaticDoubleField(cls, "ARC_SECONDS_TO_RADIANS");
          BESSELIAN_YEAR = env->getStaticDoubleField(cls, "BESSELIAN_YEAR");
          EGM96_EARTH_C20 = env->getStaticDoubleField(cls, "EGM96_EARTH_C20");
          EGM96_EARTH_C30 = env->getStaticDoubleField(cls, "EGM96_EARTH_C30");
          EGM96_EARTH_C40 = env->getStaticDoubleField(cls, "EGM96_EARTH_C40");
          EGM96_EARTH_C50 = env->getStaticDoubleField(cls, "EGM96_EARTH_C50");
          EGM96_EARTH_C60 = env->getStaticDoubleField(cls, "EGM96_EARTH_C60");
          EGM96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EGM96_EARTH_EQUATORIAL_RADIUS");
          EGM96_EARTH_MU = env->getStaticDoubleField(cls, "EGM96_EARTH_MU");
          EIGEN5C_EARTH_C20 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C20");
          EIGEN5C_EARTH_C30 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C30");
          EIGEN5C_EARTH_C40 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C40");
          EIGEN5C_EARTH_C50 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C50");
          EIGEN5C_EARTH_C60 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C60");
          EIGEN5C_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_EQUATORIAL_RADIUS");
          EIGEN5C_EARTH_MU = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_MU");
          G0_STANDARD_GRAVITY = env->getStaticDoubleField(cls, "G0_STANDARD_GRAVITY");
          GRIM5C1_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_ANGULAR_VELOCITY");
          GRIM5C1_EARTH_C20 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C20");
          GRIM5C1_EARTH_C30 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C30");
          GRIM5C1_EARTH_C40 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C40");
          GRIM5C1_EARTH_C50 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C50");
          GRIM5C1_EARTH_C60 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C60");
          GRIM5C1_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_EQUATORIAL_RADIUS");
          GRIM5C1_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_FLATTENING");
          GRIM5C1_EARTH_MU = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_MU");
          GRS80_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRS80_EARTH_ANGULAR_VELOCITY");
          GRS80_EARTH_C20 = env->getStaticDoubleField(cls, "GRS80_EARTH_C20");
          GRS80_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRS80_EARTH_EQUATORIAL_RADIUS");
          GRS80_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRS80_EARTH_FLATTENING");
          GRS80_EARTH_MU = env->getStaticDoubleField(cls, "GRS80_EARTH_MU");
          IAU_2012_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "IAU_2012_ASTRONOMICAL_UNIT");
          IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_EARTH_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_GM");
          IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS");
          IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_JUPITER_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_GM");
          IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS");
          IAU_2015_NOMINAL_SOLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SOLAR_RADIUS");
          IAU_2015_NOMINAL_SUN_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SUN_GM");
          IERS2003_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2003_EARTH_ANGULAR_VELOCITY");
          IERS2003_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2003_EARTH_C20");
          IERS2003_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2003_EARTH_EQUATORIAL_RADIUS");
          IERS2003_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2003_EARTH_FLATTENING");
          IERS2003_EARTH_MU = env->getStaticDoubleField(cls, "IERS2003_EARTH_MU");
          IERS2010_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2010_EARTH_ANGULAR_VELOCITY");
          IERS2010_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2010_EARTH_C20");
          IERS2010_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2010_EARTH_EQUATORIAL_RADIUS");
          IERS2010_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2010_EARTH_FLATTENING");
          IERS2010_EARTH_MU = env->getStaticDoubleField(cls, "IERS2010_EARTH_MU");
          IERS96_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS96_EARTH_ANGULAR_VELOCITY");
          IERS96_EARTH_C20 = env->getStaticDoubleField(cls, "IERS96_EARTH_C20");
          IERS96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS96_EARTH_EQUATORIAL_RADIUS");
          IERS96_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS96_EARTH_FLATTENING");
          IERS96_EARTH_MU = env->getStaticDoubleField(cls, "IERS96_EARTH_MU");
          JPL_SSD_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "JPL_SSD_ASTRONOMICAL_UNIT");
          JPL_SSD_EARTH_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_GM");
          JPL_SSD_EARTH_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_MOON_MASS_RATIO");
          JPL_SSD_EARTH_PLUS_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_PLUS_MOON_GM");
          JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = env->getStaticDoubleField(cls, "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT");
          JPL_SSD_JUPITER_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_JUPITER_SYSTEM_GM");
          JPL_SSD_MARS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_MARS_SYSTEM_GM");
          JPL_SSD_MERCURY_GM = env->getStaticDoubleField(cls, "JPL_SSD_MERCURY_GM");
          JPL_SSD_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_MOON_GM");
          JPL_SSD_NEPTUNE_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_NEPTUNE_SYSTEM_GM");
          JPL_SSD_PLUTO_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_PLUTO_SYSTEM_GM");
          JPL_SSD_SATURN_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_SATURN_SYSTEM_GM");
          JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO");
          JPL_SSD_SUN_GM = env->getStaticDoubleField(cls, "JPL_SSD_SUN_GM");
          JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MERCURY_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MERCURY_MASS_RATIO");
          JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_VENUS_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_VENUS_MASS_RATIO");
          JPL_SSD_URANUS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_URANUS_SYSTEM_GM");
          JPL_SSD_VENUS_GM = env->getStaticDoubleField(cls, "JPL_SSD_VENUS_GM");
          JULIAN_CENTURY = env->getStaticDoubleField(cls, "JULIAN_CENTURY");
          JULIAN_DAY = env->getStaticDoubleField(cls, "JULIAN_DAY");
          JULIAN_YEAR = env->getStaticDoubleField(cls, "JULIAN_YEAR");
          MOON_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "MOON_EQUATORIAL_RADIUS");
          SPEED_OF_LIGHT = env->getStaticDoubleField(cls, "SPEED_OF_LIGHT");
          SUN_RADIUS = env->getStaticDoubleField(cls, "SUN_RADIUS");
          WGS84_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "WGS84_EARTH_ANGULAR_VELOCITY");
          WGS84_EARTH_C20 = env->getStaticDoubleField(cls, "WGS84_EARTH_C20");
          WGS84_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "WGS84_EARTH_EQUATORIAL_RADIUS");
          WGS84_EARTH_FLATTENING = env->getStaticDoubleField(cls, "WGS84_EARTH_FLATTENING");
          WGS84_EARTH_MU = env->getStaticDoubleField(cls, "WGS84_EARTH_MU");
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_Constants__methods_[] = {
        DECLARE_METHOD(t_Constants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Constants, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Constants)[] = {
        { Py_tp_methods, t_Constants__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Constants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Constants, t_Constants, Constants);

      void t_Constants::install(PyObject *module)
      {
        installType(&PY_TYPE(Constants), &PY_TYPE_DEF(Constants), module, "Constants", 0);
      }

      void t_Constants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "class_", make_descriptor(Constants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "wrapfn_", make_descriptor(t_Constants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "boxfn_", make_descriptor(boxObject));
        env->getClass(Constants::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "ARC_SECONDS_TO_RADIANS", make_descriptor(Constants::ARC_SECONDS_TO_RADIANS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "BESSELIAN_YEAR", make_descriptor(Constants::BESSELIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C20", make_descriptor(Constants::EGM96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C30", make_descriptor(Constants::EGM96_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C40", make_descriptor(Constants::EGM96_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C50", make_descriptor(Constants::EGM96_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C60", make_descriptor(Constants::EGM96_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EGM96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_MU", make_descriptor(Constants::EGM96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C20", make_descriptor(Constants::EIGEN5C_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C30", make_descriptor(Constants::EIGEN5C_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C40", make_descriptor(Constants::EIGEN5C_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C50", make_descriptor(Constants::EIGEN5C_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C60", make_descriptor(Constants::EIGEN5C_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_MU", make_descriptor(Constants::EIGEN5C_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "G0_STANDARD_GRAVITY", make_descriptor(Constants::G0_STANDARD_GRAVITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C20", make_descriptor(Constants::GRIM5C1_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C30", make_descriptor(Constants::GRIM5C1_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C40", make_descriptor(Constants::GRIM5C1_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C50", make_descriptor(Constants::GRIM5C1_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C60", make_descriptor(Constants::GRIM5C1_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_FLATTENING", make_descriptor(Constants::GRIM5C1_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_MU", make_descriptor(Constants::GRIM5C1_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRS80_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_C20", make_descriptor(Constants::GRS80_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRS80_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_FLATTENING", make_descriptor(Constants::GRS80_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_MU", make_descriptor(Constants::GRS80_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2012_ASTRONOMICAL_UNIT", make_descriptor(Constants::IAU_2012_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_GM", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_GM", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SOLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_SOLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SUN_GM", make_descriptor(Constants::IAU_2015_NOMINAL_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2003_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_C20", make_descriptor(Constants::IERS2003_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2003_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_FLATTENING", make_descriptor(Constants::IERS2003_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_MU", make_descriptor(Constants::IERS2003_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2010_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_C20", make_descriptor(Constants::IERS2010_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2010_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_FLATTENING", make_descriptor(Constants::IERS2010_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_MU", make_descriptor(Constants::IERS2010_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS96_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_C20", make_descriptor(Constants::IERS96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_FLATTENING", make_descriptor(Constants::IERS96_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_MU", make_descriptor(Constants::IERS96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_ASTRONOMICAL_UNIT", make_descriptor(Constants::JPL_SSD_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_GM", make_descriptor(Constants::JPL_SSD_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_EARTH_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_PLUS_MOON_GM", make_descriptor(Constants::JPL_SSD_EARTH_PLUS_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT", make_descriptor(Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_JUPITER_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_JUPITER_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MARS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_MARS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MERCURY_GM", make_descriptor(Constants::JPL_SSD_MERCURY_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MOON_GM", make_descriptor(Constants::JPL_SSD_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_NEPTUNE_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_NEPTUNE_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_PLUTO_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_PLUTO_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SATURN_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_SATURN_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_GM", make_descriptor(Constants::JPL_SSD_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MERCURY_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_VENUS_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_VENUS_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_URANUS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_URANUS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_VENUS_GM", make_descriptor(Constants::JPL_SSD_VENUS_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_CENTURY", make_descriptor(Constants::JULIAN_CENTURY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_DAY", make_descriptor(Constants::JULIAN_DAY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_YEAR", make_descriptor(Constants::JULIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "MOON_EQUATORIAL_RADIUS", make_descriptor(Constants::MOON_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SPEED_OF_LIGHT", make_descriptor(Constants::SPEED_OF_LIGHT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SUN_RADIUS", make_descriptor(Constants::SUN_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::WGS84_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_C20", make_descriptor(Constants::WGS84_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::WGS84_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_FLATTENING", make_descriptor(Constants::WGS84_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_MU", make_descriptor(Constants::WGS84_EARTH_MU));
      }

      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Constants::initializeClass, 1)))
          return NULL;
        return t_Constants::wrap_Object(Constants(((t_Constants *) arg)->object.this$));
      }
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Constants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile::class$ = NULL;
          jmethodID *Percentile::mids$ = NULL;
          bool Percentile::live$ = false;

          jclass Percentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_copy_f11590ceba8ecf74] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_evaluate_dcbc7ce2902fa136] = env->getMethodID(cls, "evaluate", "(D)D");
              mids$[mid_evaluate_1c41301ff6e224e7] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_9b4f2bb29c648b6e] = env->getMethodID(cls, "evaluate", "([DIID)D");
              mids$[mid_getEstimationType_ca8426dd6c9a49d0] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_f697e2e90a72747d] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_884e0da06e21afce] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_getPivotingStrategy_d098c6797f63b37e] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
              mids$[mid_getQuantile_dff5885c2c873297] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_setData_fa9d415d19f69361] = env->getMethodID(cls, "setData", "([D)V");
              mids$[mid_setData_12aca76acb10f1af] = env->getMethodID(cls, "setData", "([DII)V");
              mids$[mid_setQuantile_17db3a65980d3441] = env->getMethodID(cls, "setQuantile", "(D)V");
              mids$[mid_withEstimationType_c1b36ec5c96b8b3c] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withKthSelector_1b4491e78166507c] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withNaNStrategy_13131bcbd6ba5b56] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_getWorkArray_41a59b6c86e2e047] = env->getMethodID(cls, "getWorkArray", "([DII)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Percentile::Percentile() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          Percentile::Percentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          Percentile Percentile::copy() const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_copy_f11590ceba8ecf74]));
          }

          jdouble Percentile::evaluate(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_dcbc7ce2902fa136], a0);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1c41301ff6e224e7], a0.this$, a1);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9b4f2bb29c648b6e], a0.this$, a1, a2, a3);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Percentile::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_ca8426dd6c9a49d0]));
          }

          ::org::hipparchus::util::KthSelector Percentile::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_f697e2e90a72747d]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Percentile::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_884e0da06e21afce]));
          }

          ::org::hipparchus::util::PivotingStrategy Percentile::getPivotingStrategy() const
          {
            return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_d098c6797f63b37e]));
          }

          jdouble Percentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_dff5885c2c873297]);
          }

          void Percentile::setData(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_fa9d415d19f69361], a0.this$);
          }

          void Percentile::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_12aca76acb10f1af], a0.this$, a1, a2);
          }

          void Percentile::setQuantile(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setQuantile_17db3a65980d3441], a0);
          }

          Percentile Percentile::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withEstimationType_c1b36ec5c96b8b3c], a0.this$));
          }

          Percentile Percentile::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withKthSelector_1b4491e78166507c], a0.this$));
          }

          Percentile Percentile::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_13131bcbd6ba5b56], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_Percentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Percentile_init_(t_Percentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Percentile_copy(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_evaluate(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_getEstimationType(t_Percentile *self);
          static PyObject *t_Percentile_getKthSelector(t_Percentile *self);
          static PyObject *t_Percentile_getNaNStrategy(t_Percentile *self);
          static PyObject *t_Percentile_getPivotingStrategy(t_Percentile *self);
          static PyObject *t_Percentile_getQuantile(t_Percentile *self);
          static PyObject *t_Percentile_setData(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_setQuantile(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withEstimationType(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withKthSelector(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withNaNStrategy(t_Percentile *self, PyObject *arg);
          static int t_Percentile_set__data(t_Percentile *self, PyObject *arg, void *data);
          static PyObject *t_Percentile_get__estimationType(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__kthSelector(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__naNStrategy(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__pivotingStrategy(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__quantile(t_Percentile *self, void *data);
          static int t_Percentile_set__quantile(t_Percentile *self, PyObject *arg, void *data);
          static PyGetSetDef t_Percentile__fields_[] = {
            DECLARE_SET_FIELD(t_Percentile, data),
            DECLARE_GET_FIELD(t_Percentile, estimationType),
            DECLARE_GET_FIELD(t_Percentile, kthSelector),
            DECLARE_GET_FIELD(t_Percentile, naNStrategy),
            DECLARE_GET_FIELD(t_Percentile, pivotingStrategy),
            DECLARE_GETSET_FIELD(t_Percentile, quantile),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile__methods_[] = {
            DECLARE_METHOD(t_Percentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, getEstimationType, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getKthSelector, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getNaNStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getPivotingStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, setData, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, setQuantile, METH_O),
            DECLARE_METHOD(t_Percentile, withEstimationType, METH_O),
            DECLARE_METHOD(t_Percentile, withKthSelector, METH_O),
            DECLARE_METHOD(t_Percentile, withNaNStrategy, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile)[] = {
            { Py_tp_methods, t_Percentile__methods_ },
            { Py_tp_init, (void *) t_Percentile_init_ },
            { Py_tp_getset, t_Percentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Percentile, t_Percentile, Percentile);

          void t_Percentile::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile), &PY_TYPE_DEF(Percentile), module, "Percentile", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "EstimationType", make_descriptor(&PY_TYPE_DEF(Percentile$EstimationType)));
          }

          void t_Percentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "class_", make_descriptor(Percentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "wrapfn_", make_descriptor(t_Percentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Percentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile::initializeClass, 1)))
              return NULL;
            return t_Percentile::wrap_Object(Percentile(((t_Percentile *) arg)->object.this$));
          }
          static PyObject *t_Percentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Percentile_init_(t_Percentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Percentile object((jobject) NULL);

                INT_CALL(object = Percentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                Percentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = Percentile(a0));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Percentile_copy(t_Percentile *self, PyObject *args)
          {
            Percentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Percentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Percentile_evaluate(t_Percentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.evaluate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Percentile_getEstimationType(t_Percentile *self)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(result);
          }

          static PyObject *t_Percentile_getKthSelector(t_Percentile *self)
          {
            ::org::hipparchus::util::KthSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(result);
          }

          static PyObject *t_Percentile_getNaNStrategy(t_Percentile *self)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
          }

          static PyObject *t_Percentile_getPivotingStrategy(t_Percentile *self)
          {
            ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getPivotingStrategy());
            return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
          }

          static PyObject *t_Percentile_getQuantile(t_Percentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Percentile_setData(t_Percentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(self->object.setData(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setData(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "setData", args, 2);
          }

          static PyObject *t_Percentile_setQuantile(t_Percentile *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setQuantile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setQuantile", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withEstimationType(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType a0((jobject) NULL);
            PyTypeObject **p0;
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::parameters_))
            {
              OBJ_CALL(result = self->object.withEstimationType(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEstimationType", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withKthSelector(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::util::KthSelector a0((jobject) NULL);
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::util::KthSelector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withKthSelector(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withKthSelector", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withNaNStrategy(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
            {
              OBJ_CALL(result = self->object.withNaNStrategy(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withNaNStrategy", arg);
            return NULL;
          }

          static int t_Percentile_set__data(t_Percentile *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setData(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "data", arg);
            return -1;
          }

          static PyObject *t_Percentile_get__estimationType(t_Percentile *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__kthSelector(t_Percentile *self, void *data)
          {
            ::org::hipparchus::util::KthSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__naNStrategy(t_Percentile *self, void *data)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__pivotingStrategy(t_Percentile *self, void *data)
          {
            ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getPivotingStrategy());
            return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__quantile(t_Percentile *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQuantile());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Percentile_set__quantile(t_Percentile *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setQuantile(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "quantile", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonSatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *PythonSatelliteAttitudeEphemeris::mids$ = NULL;
        bool PythonSatelliteAttitudeEphemeris::live$ = false;

        jclass PythonSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitudeProvider_f95b60a986adb964] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSatelliteAttitudeEphemeris::PythonSatelliteAttitudeEphemeris() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonSatelliteAttitudeEphemeris::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonSatelliteAttitudeEphemeris::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonSatelliteAttitudeEphemeris::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_PythonSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSatelliteAttitudeEphemeris, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_PythonSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_PythonSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_PythonSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSatelliteAttitudeEphemeris, t_PythonSatelliteAttitudeEphemeris, PythonSatelliteAttitudeEphemeris);

        void t_PythonSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSatelliteAttitudeEphemeris), &PY_TYPE_DEF(PythonSatelliteAttitudeEphemeris), module, "PythonSatelliteAttitudeEphemeris", 1);
        }

        void t_PythonSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "class_", make_descriptor(PythonSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_PythonSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSatelliteAttitudeEphemeris::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0 },
            { "getId", "()Ljava/lang/String;", (void *) t_PythonSatelliteAttitudeEphemeris_getId1 },
            { "getSegments", "()Ljava/util/List;", (void *) t_PythonSatelliteAttitudeEphemeris_getSegments2 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStart3 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStop4 },
            { "pythonDecRef", "()V", (void *) t_PythonSatelliteAttitudeEphemeris_pythonDecRef5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_PythonSatelliteAttitudeEphemeris::wrap_Object(PythonSatelliteAttitudeEphemeris(((t_PythonSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          PythonSatelliteAttitudeEphemeris object((jobject) NULL);

          INT_CALL(object = PythonSatelliteAttitudeEphemeris());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::BoundedAttitudeProvider::initializeClass, &value))
          {
            throwTypeError("getAttitudeProvider", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getId", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getId", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSegments", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getSegments", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStart", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStop", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStop", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative::class$ = NULL;
        jmethodID *UnivariateDerivative::mids$ = NULL;
        bool UnivariateDerivative::live$ = false;

        jclass UnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_46f85b53d9aedd96] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_48330f48ce3d930b] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_toDerivativeStructure_73e277cbd957031a] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative::UnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble UnivariateDerivative::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_46f85b53d9aedd96], a0);
        }

        jint UnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        jdouble UnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_48330f48ce3d930b], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_73e277cbd957031a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args);
        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data);
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data);
        static PyGetSetDef t_UnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_UnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative)[] = {
          { Py_tp_methods, t_UnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative_init_ },
          { Py_tp_getset, t_UnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative, t_UnivariateDerivative, UnivariateDerivative);
        PyObject *t_UnivariateDerivative::wrap_Object(const UnivariateDerivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative), &PY_TYPE_DEF(UnivariateDerivative), module, "UnivariateDerivative", 0);
        }

        void t_UnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "class_", make_descriptor(UnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "wrapfn_", make_descriptor(t_UnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative::wrap_Object(UnivariateDerivative(((t_UnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          UnivariateDerivative object((jobject) NULL);

          INT_CALL(object = UnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleValueChecker.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleValueChecker::class$ = NULL;
      jmethodID *SimpleValueChecker::mids$ = NULL;
      bool SimpleValueChecker::live$ = false;

      jclass SimpleValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_d91fb69186d4533e] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointValuePair;Lorg/hipparchus/optim/PointValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

      jboolean SimpleValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointValuePair & a1, const ::org::hipparchus::optim::PointValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_d91fb69186d4533e], a0, a1.this$, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args);
      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args);
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data);
      static PyGetSetDef t_SimpleValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleValueChecker)[] = {
        { Py_tp_methods, t_SimpleValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleValueChecker_init_ },
        { Py_tp_getset, t_SimpleValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleValueChecker, t_SimpleValueChecker, SimpleValueChecker);
      PyObject *t_SimpleValueChecker::wrap_Object(const SimpleValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleValueChecker), &PY_TYPE_DEF(SimpleValueChecker), module, "SimpleValueChecker", 0);
      }

      void t_SimpleValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "class_", make_descriptor(SimpleValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "wrapfn_", make_descriptor(t_SimpleValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleValueChecker::wrap_Object(SimpleValueChecker(((t_SimpleValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointValuePair::initializeClass, ::org::hipparchus::optim::PointValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/EigenDecompositionSymmetric.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionSymmetric::mids$ = NULL;
      bool EigenDecompositionSymmetric::live$ = false;
      jdouble EigenDecompositionSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_aab9739668d2ec97] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DZ)V");
          mids$[mid_init$_0592e6e26d56b828] = env->getMethodID(cls, "<init>", "([D[DDZ)V");
          mids$[mid_getD_c1458e35d8bd3b65] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_getDeterminant_dff5885c2c873297] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalue_46f85b53d9aedd96] = env->getMethodID(cls, "getEigenvalue", "(I)D");
          mids$[mid_getEigenvalues_60c7040667a7dc5c] = env->getMethodID(cls, "getEigenvalues", "()[D");
          mids$[mid_getEigenvector_b686e6fcbf82678b] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getEpsilon_dff5885c2c873297] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getSolver_6b396ee5bc11943f] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getSquareRoot_688b496048ff947b] = env->getMethodID(cls, "getSquareRoot", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_688b496048ff947b] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_688b496048ff947b] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aab9739668d2ec97, a0.this$, a1, a2)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0592e6e26d56b828, a0.this$, a1.this$, a2, a3)) {}

      ::org::hipparchus::linear::DiagonalMatrix EigenDecompositionSymmetric::getD() const
      {
        return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getD_c1458e35d8bd3b65]));
      }

      jdouble EigenDecompositionSymmetric::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_dff5885c2c873297]);
      }

      jdouble EigenDecompositionSymmetric::getEigenvalue(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEigenvalue_46f85b53d9aedd96], a0);
      }

      JArray< jdouble > EigenDecompositionSymmetric::getEigenvalues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_60c7040667a7dc5c]));
      }

      ::org::hipparchus::linear::RealVector EigenDecompositionSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_b686e6fcbf82678b], a0));
      }

      jdouble EigenDecompositionSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_dff5885c2c873297]);
      }

      ::org::hipparchus::linear::DecompositionSolver EigenDecompositionSymmetric::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_6b396ee5bc11943f]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getSquareRoot() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSquareRoot_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_688b496048ff947b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, solver),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, squareRoot),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSquareRoot, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionSymmetric, t_EigenDecompositionSymmetric, EigenDecompositionSymmetric);

      void t_EigenDecompositionSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionSymmetric), &PY_TYPE_DEF(EigenDecompositionSymmetric), module, "EigenDecompositionSymmetric", 0);
      }

      void t_EigenDecompositionSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "class_", make_descriptor(EigenDecompositionSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionSymmetric::wrap_Object(EigenDecompositionSymmetric(((t_EigenDecompositionSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble a2;
            jboolean a3;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[DDZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return result.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return value.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeSupplement::class$ = NULL;
        jmethodID *CRD$RangeSupplement::mids$ = NULL;
        bool CRD$RangeSupplement::live$ = false;

        jclass CRD$RangeSupplement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeSupplement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7b0546b525dc44ca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;DDDDD)V");
            mids$[mid_getCenterOfMassCorrection_dff5885c2c873297] = env->getMethodID(cls, "getCenterOfMassCorrection", "()D");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getNdFilterValue_dff5885c2c873297] = env->getMethodID(cls, "getNdFilterValue", "()D");
            mids$[mid_getRangeRate_dff5885c2c873297] = env->getMethodID(cls, "getRangeRate", "()D");
            mids$[mid_getSystemConfigurationId_11b109bd155ca898] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeBiasApplied_dff5885c2c873297] = env->getMethodID(cls, "getTimeBiasApplied", "()D");
            mids$[mid_getTroposphericRefractionCorrection_dff5885c2c873297] = env->getMethodID(cls, "getTroposphericRefractionCorrection", "()D");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeSupplement::CRD$RangeSupplement(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b0546b525dc44ca, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

        jdouble CRD$RangeSupplement::getCenterOfMassCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassCorrection_dff5885c2c873297]);
        }

        ::org::orekit::time::AbsoluteDate CRD$RangeSupplement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        jdouble CRD$RangeSupplement::getNdFilterValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNdFilterValue_dff5885c2c873297]);
        }

        jdouble CRD$RangeSupplement::getRangeRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRangeRate_dff5885c2c873297]);
        }

        ::java::lang::String CRD$RangeSupplement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_11b109bd155ca898]));
        }

        jdouble CRD$RangeSupplement::getTimeBiasApplied() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeBiasApplied_dff5885c2c873297]);
        }

        jdouble CRD$RangeSupplement::getTroposphericRefractionCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTroposphericRefractionCorrection_dff5885c2c873297]);
        }

        ::java::lang::String CRD$RangeSupplement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRD$RangeSupplement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args);
        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyGetSetDef t_CRD$RangeSupplement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, centerOfMassCorrection),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, date),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, ndFilterValue),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, rangeRate),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, timeBiasApplied),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, troposphericRefractionCorrection),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeSupplement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeSupplement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getCenterOfMassCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getNdFilterValue, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getRangeRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTimeBiasApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTroposphericRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeSupplement)[] = {
          { Py_tp_methods, t_CRD$RangeSupplement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeSupplement_init_ },
          { Py_tp_getset, t_CRD$RangeSupplement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeSupplement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeSupplement, t_CRD$RangeSupplement, CRD$RangeSupplement);

        void t_CRD$RangeSupplement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeSupplement), &PY_TYPE_DEF(CRD$RangeSupplement), module, "CRD$RangeSupplement", 0);
        }

        void t_CRD$RangeSupplement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "class_", make_descriptor(CRD$RangeSupplement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "wrapfn_", make_descriptor(t_CRD$RangeSupplement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeSupplement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeSupplement::wrap_Object(CRD$RangeSupplement(((t_CRD$RangeSupplement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeSupplement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          jdouble a6;
          CRD$RangeSupplement object((jobject) NULL);

          if (!parseArgs(args, "ksDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = CRD$RangeSupplement(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRangeRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$RangeSupplement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRangeRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorMeanPlaneCrossing$CrossingResult::class$ = NULL;
        jmethodID *SensorMeanPlaneCrossing$CrossingResult::mids$ = NULL;
        bool SensorMeanPlaneCrossing$CrossingResult::live$ = false;

        jclass SensorMeanPlaneCrossing$CrossingResult::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ba46eb41ed43e894] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_dff5885c2c873297] = env->getMethodID(cls, "getLine", "()D");
            mids$[mid_getTarget_d52645e0d4c07563] = env->getMethodID(cls, "getTarget", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirection_d52645e0d4c07563] = env->getMethodID(cls, "getTargetDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirectionDerivative_d52645e0d4c07563] = env->getMethodID(cls, "getTargetDirectionDerivative", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing$CrossingResult::SensorMeanPlaneCrossing$CrossingResult(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ba46eb41ed43e894, a0.this$, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate SensorMeanPlaneCrossing$CrossingResult::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        jdouble SensorMeanPlaneCrossing$CrossingResult::getLine() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_dff5885c2c873297]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTarget() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTarget_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirection_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirectionDerivative() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirectionDerivative_d52645e0d4c07563]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorMeanPlaneCrossing$CrossingResult_init_(t_SensorMeanPlaneCrossing$CrossingResult *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getDate(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getLine(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTarget(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__date(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__line(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__target(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyGetSetDef t_SensorMeanPlaneCrossing$CrossingResult__fields_[] = {
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, date),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, line),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, target),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, targetDirection),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, targetDirectionDerivative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorMeanPlaneCrossing$CrossingResult__methods_[] = {
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTarget, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTargetDirection, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTargetDirectionDerivative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorMeanPlaneCrossing$CrossingResult)[] = {
          { Py_tp_methods, t_SensorMeanPlaneCrossing$CrossingResult__methods_ },
          { Py_tp_init, (void *) t_SensorMeanPlaneCrossing$CrossingResult_init_ },
          { Py_tp_getset, t_SensorMeanPlaneCrossing$CrossingResult__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorMeanPlaneCrossing$CrossingResult)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorMeanPlaneCrossing$CrossingResult, t_SensorMeanPlaneCrossing$CrossingResult, SensorMeanPlaneCrossing$CrossingResult);

        void t_SensorMeanPlaneCrossing$CrossingResult::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), &PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult), module, "SensorMeanPlaneCrossing$CrossingResult", 0);
        }

        void t_SensorMeanPlaneCrossing$CrossingResult::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "class_", make_descriptor(SensorMeanPlaneCrossing$CrossingResult::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "wrapfn_", make_descriptor(t_SensorMeanPlaneCrossing$CrossingResult::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorMeanPlaneCrossing$CrossingResult::initializeClass, 1)))
            return NULL;
          return t_SensorMeanPlaneCrossing$CrossingResult::wrap_Object(SensorMeanPlaneCrossing$CrossingResult(((t_SensorMeanPlaneCrossing$CrossingResult *) arg)->object.this$));
        }
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorMeanPlaneCrossing$CrossingResult::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorMeanPlaneCrossing$CrossingResult_init_(t_SensorMeanPlaneCrossing$CrossingResult *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          SensorMeanPlaneCrossing$CrossingResult object((jobject) NULL);

          if (!parseArgs(args, "kDkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorMeanPlaneCrossing$CrossingResult(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getDate(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getLine(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLine());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTarget(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTarget());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetDirectionDerivative());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__date(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__line(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLine());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__target(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTarget());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetDirectionDerivative());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldMaxGapInterpolationGrid::class$ = NULL;
            jmethodID *FieldMaxGapInterpolationGrid::mids$ = NULL;
            bool FieldMaxGapInterpolationGrid::live$ = false;

            jclass FieldMaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_79b17d518528c1b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGridPoints_04b33bd8d7b2bde1] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldMaxGapInterpolationGrid::FieldMaxGapInterpolationGrid(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_79b17d518528c1b2, a0.this$, a1.this$)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldMaxGapInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_04b33bd8d7b2bde1], a0.this$, a1.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldMaxGapInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldMaxGapInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldMaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldMaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldMaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldMaxGapInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldMaxGapInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldMaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldMaxGapInterpolationGrid, t_FieldMaxGapInterpolationGrid, FieldMaxGapInterpolationGrid);
            PyObject *t_FieldMaxGapInterpolationGrid::wrap_Object(const FieldMaxGapInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldMaxGapInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldMaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldMaxGapInterpolationGrid), &PY_TYPE_DEF(FieldMaxGapInterpolationGrid), module, "FieldMaxGapInterpolationGrid", 0);
            }

            void t_FieldMaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "class_", make_descriptor(FieldMaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_FieldMaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldMaxGapInterpolationGrid::wrap_Object(FieldMaxGapInterpolationGrid(((t_FieldMaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldMaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldMaxGapInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldCjSjCoefficient::class$ = NULL;
            jmethodID *FieldCjSjCoefficient::mids$ = NULL;
            bool FieldCjSjCoefficient::live$ = false;

            jclass FieldCjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c8b8af07d18fac54] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getCj_93058f0552012043] = env->getMethodID(cls, "getCj", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDh_93058f0552012043] = env->getMethodID(cls, "getDcjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDk_93058f0552012043] = env->getMethodID(cls, "getDcjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDh_93058f0552012043] = env->getMethodID(cls, "getDsjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDk_93058f0552012043] = env->getMethodID(cls, "getDsjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getSj_93058f0552012043] = env->getMethodID(cls, "getSj", "(I)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldCjSjCoefficient::FieldCjSjCoefficient(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8b8af07d18fac54, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getCj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCj_93058f0552012043], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDh_93058f0552012043], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDk_93058f0552012043], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDh_93058f0552012043], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDk_93058f0552012043], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getSj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSj_93058f0552012043], a0));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args);
            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data);
            static PyGetSetDef t_FieldCjSjCoefficient__fields_[] = {
              DECLARE_GET_FIELD(t_FieldCjSjCoefficient, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldCjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_FieldCjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldCjSjCoefficient)[] = {
              { Py_tp_methods, t_FieldCjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_FieldCjSjCoefficient_init_ },
              { Py_tp_getset, t_FieldCjSjCoefficient__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldCjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldCjSjCoefficient, t_FieldCjSjCoefficient, FieldCjSjCoefficient);
            PyObject *t_FieldCjSjCoefficient::wrap_Object(const FieldCjSjCoefficient& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldCjSjCoefficient::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldCjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldCjSjCoefficient), &PY_TYPE_DEF(FieldCjSjCoefficient), module, "FieldCjSjCoefficient", 0);
            }

            void t_FieldCjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "class_", make_descriptor(FieldCjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "wrapfn_", make_descriptor(t_FieldCjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldCjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_FieldCjSjCoefficient::wrap_Object(FieldCjSjCoefficient(((t_FieldCjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldCjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::Field a2((jobject) NULL);
              PyTypeObject **p2;
              FieldCjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldCjSjCoefficient(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
              return NULL;
            }
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TilesCache.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TilesCache::class$ = NULL;
        jmethodID *TilesCache::mids$ = NULL;
        bool TilesCache::live$ = false;

        jclass TilesCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TilesCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_953d847307fdcc31] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileFactory;Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getTile_e4980ca7d3026f70] = env->getMethodID(cls, "getTile", "(DD)Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TilesCache::TilesCache(const ::org::orekit::rugged::raster::TileFactory & a0, const ::org::orekit::rugged::raster::TileUpdater & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_953d847307fdcc31, a0.this$, a1.this$, a2)) {}

        ::org::orekit::rugged::raster::Tile TilesCache::getTile(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_getTile_e4980ca7d3026f70], a0, a1));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args);
        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args);
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data);
        static PyGetSetDef t_TilesCache__fields_[] = {
          DECLARE_GET_FIELD(t_TilesCache, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TilesCache__methods_[] = {
          DECLARE_METHOD(t_TilesCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, of_, METH_VARARGS),
          DECLARE_METHOD(t_TilesCache, getTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TilesCache)[] = {
          { Py_tp_methods, t_TilesCache__methods_ },
          { Py_tp_init, (void *) t_TilesCache_init_ },
          { Py_tp_getset, t_TilesCache__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TilesCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TilesCache, t_TilesCache, TilesCache);
        PyObject *t_TilesCache::wrap_Object(const TilesCache& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TilesCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TilesCache::install(PyObject *module)
        {
          installType(&PY_TYPE(TilesCache), &PY_TYPE_DEF(TilesCache), module, "TilesCache", 0);
        }

        void t_TilesCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "class_", make_descriptor(TilesCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "wrapfn_", make_descriptor(t_TilesCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TilesCache::initializeClass, 1)))
            return NULL;
          return t_TilesCache::wrap_Object(TilesCache(((t_TilesCache *) arg)->object.this$));
        }
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TilesCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileFactory a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::raster::TileUpdater a1((jobject) NULL);
          jint a2;
          TilesCache object((jobject) NULL);

          if (!parseArgs(args, "KkI", ::org::orekit::rugged::raster::TileFactory::initializeClass, ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &p0, ::org::orekit::rugged::raster::t_TileFactory::parameters_, &a1, &a2))
          {
            INT_CALL(object = TilesCache(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getTile(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getTile", args);
          return NULL;
        }
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalMagneticFieldFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame::mids$ = NULL;
      bool LocalMagneticFieldFrame::live$ = false;

      jclass LocalMagneticFieldFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b0f7c520931e76f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_9a03926a6d1be3ee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getMagneticField_ce929c60ccd126d8] = env->getMethodID(cls, "getMagneticField", "()Lorg/orekit/models/earth/GeoMagneticField;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_475182fd71c6851b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_076f35c1feeb36b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0f7c520931e76f7, a0.this$, a1.this$, a2.this$)) {}

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector & a2, const ::org::orekit::frames::Frame & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a03926a6d1be3ee, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::frames::Frame LocalMagneticFieldFrame::getInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::models::earth::GeoMagneticField LocalMagneticFieldFrame::getMagneticField() const
      {
        return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getMagneticField_ce929c60ccd126d8]));
      }

      ::java::lang::String LocalMagneticFieldFrame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_475182fd71c6851b], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_076f35c1feeb36b3], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, inertialFrame),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, magneticField),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getMagneticField, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getName, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, rotationFromInertial, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame__methods_ },
        { Py_tp_init, (void *) t_LocalMagneticFieldFrame_init_ },
        { Py_tp_getset, t_LocalMagneticFieldFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame, t_LocalMagneticFieldFrame, LocalMagneticFieldFrame);

      void t_LocalMagneticFieldFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame), &PY_TYPE_DEF(LocalMagneticFieldFrame), module, "LocalMagneticFieldFrame", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "LOFBuilderVector", make_descriptor(&PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector)));
      }

      void t_LocalMagneticFieldFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "class_", make_descriptor(LocalMagneticFieldFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame::wrap_Object(LocalMagneticFieldFrame(((t_LocalMagneticFieldFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::frames::t_LocalMagneticFieldFrame$LOFBuilderVector::parameters_, &a3))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);
        OBJ_CALL(result = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
        OBJ_CALL(value = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *IRNSSScale::class$ = NULL;
      jmethodID *IRNSSScale::mids$ = NULL;
      bool IRNSSScale::live$ = false;

      jclass IRNSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/IRNSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String IRNSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble IRNSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IRNSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble IRNSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String IRNSSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self);
      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data);
      static PyGetSetDef t_IRNSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_IRNSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IRNSSScale__methods_[] = {
        DECLARE_METHOD(t_IRNSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IRNSSScale)[] = {
        { Py_tp_methods, t_IRNSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IRNSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IRNSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IRNSSScale, t_IRNSSScale, IRNSSScale);

      void t_IRNSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(IRNSSScale), &PY_TYPE_DEF(IRNSSScale), module, "IRNSSScale", 0);
      }

      void t_IRNSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "class_", make_descriptor(IRNSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "wrapfn_", make_descriptor(t_IRNSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IRNSSScale::initializeClass, 1)))
          return NULL;
        return t_IRNSSScale::wrap_Object(IRNSSScale(((t_IRNSSScale *) arg)->object.this$));
      }
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IRNSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(IRNSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaIntegrator::live$ = false;

        jclass ClassicalRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_94f7e028fba9a627] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegrator::ClassicalRungeKuttaIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        JArray< JArray< jdouble > > ClassicalRungeKuttaIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegrator, t_ClassicalRungeKuttaIntegrator, ClassicalRungeKuttaIntegrator);

        void t_ClassicalRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaIntegrator), module, "ClassicalRungeKuttaIntegrator", 0);
        }

        void t_ClassicalRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "class_", make_descriptor(ClassicalRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegrator::wrap_Object(ClassicalRungeKuttaIntegrator(((t_ClassicalRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataWriter::class$ = NULL;
            jmethodID *AdmCommonMetadataWriter::mids$ = NULL;
            bool AdmCommonMetadataWriter::live$ = false;

            jclass AdmCommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_83157079bfaeb9fa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)V");
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmCommonMetadataWriter::AdmCommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_83157079bfaeb9fa, a0.this$)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmCommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataWriter)[] = {
              { Py_tp_methods, t_AdmCommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_AdmCommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataWriter, t_AdmCommonMetadataWriter, AdmCommonMetadataWriter);

            void t_AdmCommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataWriter), &PY_TYPE_DEF(AdmCommonMetadataWriter), module, "AdmCommonMetadataWriter", 0);
            }

            void t_AdmCommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "class_", make_descriptor(AdmCommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "wrapfn_", make_descriptor(t_AdmCommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataWriter::wrap_Object(AdmCommonMetadataWriter(((t_AdmCommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a0((jobject) NULL);
              AdmCommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = AdmCommonMetadataWriter(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/YawCompensation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawCompensation::class$ = NULL;
      jmethodID *YawCompensation::mids$ = NULL;
      bool YawCompensation::live$ = false;

      jclass YawCompensation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawCompensation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_702872f023a6c698] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;)V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_d2b70935d932b5c5] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_4e541876ea7d5bd0] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getTargetPV_129d59e5c897146f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_ad3e02e6f0d115f2] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getYawAngle_0b717e9eccab23a9] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getYawAngle_f38c6660506b041b] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawCompensation::YawCompensation(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_702872f023a6c698, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawCompensation::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawCompensation::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_129d59e5c897146f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ad3e02e6f0d115f2], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawCompensation::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0]));
      }

      ::org::hipparchus::CalculusFieldElement YawCompensation::getYawAngle(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYawAngle_0b717e9eccab23a9], a0.this$, a1.this$, a2.this$));
      }

      jdouble YawCompensation::getYawAngle(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYawAngle_f38c6660506b041b], a0.this$, a1.this$, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self);
      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data);
      static PyGetSetDef t_YawCompensation__fields_[] = {
        DECLARE_GET_FIELD(t_YawCompensation, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawCompensation__methods_[] = {
        DECLARE_METHOD(t_YawCompensation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getUnderlyingAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_YawCompensation, getYawAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawCompensation)[] = {
        { Py_tp_methods, t_YawCompensation__methods_ },
        { Py_tp_init, (void *) t_YawCompensation_init_ },
        { Py_tp_getset, t_YawCompensation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawCompensation)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawCompensation, t_YawCompensation, YawCompensation);

      void t_YawCompensation::install(PyObject *module)
      {
        installType(&PY_TYPE(YawCompensation), &PY_TYPE_DEF(YawCompensation), module, "YawCompensation", 0);
      }

      void t_YawCompensation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "class_", make_descriptor(YawCompensation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "wrapfn_", make_descriptor(t_YawCompensation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawCompensation::initializeClass, 1)))
          return NULL;
        return t_YawCompensation::wrap_Object(YawCompensation(((t_YawCompensation *) arg)->object.this$));
      }
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawCompensation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        YawCompensation object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, &a0, &a1))
        {
          INT_CALL(object = YawCompensation(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(YawCompensation), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getYawAngle", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Exception.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Exception::class$ = NULL;
    jmethodID *Exception::mids$ = NULL;
    bool Exception::live$ = false;

    jclass Exception::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Exception");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Exception::Exception() : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    Exception::Exception(const ::java::lang::String & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Exception::Exception(const ::java::lang::Throwable & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    Exception::Exception(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_Exception__methods_[] = {
      DECLARE_METHOD(t_Exception, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Exception, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Exception)[] = {
      { Py_tp_methods, t_Exception__methods_ },
      { Py_tp_init, (void *) t_Exception_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Exception)[] = {
      &PY_TYPE_DEF(::java::lang::Throwable),
      NULL
    };

    DEFINE_TYPE(Exception, t_Exception, Exception);

    void t_Exception::install(PyObject *module)
    {
      installType(&PY_TYPE(Exception), &PY_TYPE_DEF(Exception), module, "Exception", 0);
    }

    void t_Exception::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "class_", make_descriptor(Exception::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "wrapfn_", make_descriptor(t_Exception::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Exception::initializeClass, 1)))
        return NULL;
      return t_Exception::wrap_Object(Exception(((t_Exception *) arg)->object.this$));
    }
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Exception::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Exception object((jobject) NULL);

          INT_CALL(object = Exception());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Exception(a0, a1));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsMoultonFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonFieldIntegratorBuilder::live$ = false;

        jclass AdamsMoultonFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e15f46ce2042002] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegratorBuilder::AdamsMoultonFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2e15f46ce2042002, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsMoultonFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegratorBuilder, t_AdamsMoultonFieldIntegratorBuilder, AdamsMoultonFieldIntegratorBuilder);
        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(const AdamsMoultonFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonFieldIntegratorBuilder), module, "AdamsMoultonFieldIntegratorBuilder", 0);
        }

        void t_AdamsMoultonFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "class_", make_descriptor(AdamsMoultonFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(AdamsMoultonFieldIntegratorBuilder(((t_AdamsMoultonFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AdamsMoultonFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmParser::class$ = NULL;
              jmethodID *OmmParser::mids$ = NULL;
              bool OmmParser::live$ = false;

              jclass OmmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_3b62d6c77349b661] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/omm/Omm;");
                  mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_3423aca890fca0cd] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::Omm OmmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::Omm(env->callObjectMethod(this$, mids$[mid_build_3b62d6c77349b661]));
              }

              jboolean OmmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
              }

              jboolean OmmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
              }

              jboolean OmmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OmmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_3423aca890fca0cd]));
              }

              ::java::util::Map OmmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465]));
              }

              jboolean OmmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
              }

              jboolean OmmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
              }

              jboolean OmmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
              }

              jboolean OmmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
              }

              jboolean OmmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
              }

              jboolean OmmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
              }

              void OmmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {
              static PyObject *t_OmmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmParser_of_(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_build(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_getHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_getSpecialXmlElementsBuilders(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_reset(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_get__header(t_OmmParser *self, void *data);
              static PyObject *t_OmmParser_get__specialXmlElementsBuilders(t_OmmParser *self, void *data);
              static PyObject *t_OmmParser_get__parameters_(t_OmmParser *self, void *data);
              static PyGetSetDef t_OmmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OmmParser, header),
                DECLARE_GET_FIELD(t_OmmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OmmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmParser__methods_[] = {
                DECLARE_METHOD(t_OmmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmParser)[] = {
                { Py_tp_methods, t_OmmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OmmParser, t_OmmParser, OmmParser);
              PyObject *t_OmmParser::wrap_Object(const OmmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OmmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmParser *self = (t_OmmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OmmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OmmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmParser *self = (t_OmmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OmmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmParser), &PY_TYPE_DEF(OmmParser), module, "OmmParser", 0);
              }

              void t_OmmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "class_", make_descriptor(OmmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "wrapfn_", make_descriptor(t_OmmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OmmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmParser::initializeClass, 1)))
                  return NULL;
                return t_OmmParser::wrap_Object(OmmParser(((t_OmmParser *) arg)->object.this$));
              }
              static PyObject *t_OmmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmParser_of_(t_OmmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmParser_build(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::Omm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::omm::t_Omm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OmmParser_finalizeData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OmmParser_finalizeHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OmmParser_finalizeMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OmmParser_getHeader(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OmmParser_getSpecialXmlElementsBuilders(t_OmmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OmmParser_inData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OmmParser_inHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OmmParser_inMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OmmParser_prepareData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OmmParser_prepareHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OmmParser_prepareMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OmmParser_reset(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OmmParser_get__parameters_(t_OmmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OmmParser_get__header(t_OmmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OmmParser_get__specialXmlElementsBuilders(t_OmmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *FieldMatrixChangingVisitor::mids$ = NULL;
      bool FieldMatrixChangingVisitor::live$ = false;

      jclass FieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_99097cb60cf2d774] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_5aa4d40be6f39408] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_67d71003e110b686] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_99097cb60cf2d774]));
      }

      void FieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_5aa4d40be6f39408], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_67d71003e110b686], a0, a1, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self);
      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixChangingVisitor, t_FieldMatrixChangingVisitor, FieldMatrixChangingVisitor);
      PyObject *t_FieldMatrixChangingVisitor::wrap_Object(const FieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixChangingVisitor), &PY_TYPE_DEF(FieldMatrixChangingVisitor), module, "FieldMatrixChangingVisitor", 0);
      }

      void t_FieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "class_", make_descriptor(FieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixChangingVisitor::wrap_Object(FieldMatrixChangingVisitor(((t_FieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericComputationParameters::class$ = NULL;
        jmethodID *AtmosphericComputationParameters::mids$ = NULL;
        bool AtmosphericComputationParameters::live$ = false;

        jclass AtmosphericComputationParameters::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericComputationParameters");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_configureCorrectionGrid_5bf94bc89b069b4b] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_getDefaultInverseLocMargin_dff5885c2c873297] = env->getMethodID(cls, "getDefaultInverseLocMargin", "()D");
            mids$[mid_getInverseLocMargin_dff5885c2c873297] = env->getMethodID(cls, "getInverseLocMargin", "()D");
            mids$[mid_getMaxLineSensor_dff5885c2c873297] = env->getMethodID(cls, "getMaxLineSensor", "()D");
            mids$[mid_getMinLineSensor_dff5885c2c873297] = env->getMethodID(cls, "getMinLineSensor", "()D");
            mids$[mid_getNbLineGrid_570ce0828f81a2c1] = env->getMethodID(cls, "getNbLineGrid", "()I");
            mids$[mid_getNbPixelGrid_570ce0828f81a2c1] = env->getMethodID(cls, "getNbPixelGrid", "()I");
            mids$[mid_getSensorName_11b109bd155ca898] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");
            mids$[mid_getUgrid_60c7040667a7dc5c] = env->getMethodID(cls, "getUgrid", "()[D");
            mids$[mid_getVgrid_60c7040667a7dc5c] = env->getMethodID(cls, "getVgrid", "()[D");
            mids$[mid_setGridSteps_6f37635c3285dbdf] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_17db3a65980d3441] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AtmosphericComputationParameters::AtmosphericComputationParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void AtmosphericComputationParameters::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_5bf94bc89b069b4b], a0.this$, a1, a2);
        }

        jdouble AtmosphericComputationParameters::getDefaultInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultInverseLocMargin_dff5885c2c873297]);
        }

        jdouble AtmosphericComputationParameters::getInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInverseLocMargin_dff5885c2c873297]);
        }

        jdouble AtmosphericComputationParameters::getMaxLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxLineSensor_dff5885c2c873297]);
        }

        jdouble AtmosphericComputationParameters::getMinLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinLineSensor_dff5885c2c873297]);
        }

        jint AtmosphericComputationParameters::getNbLineGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbLineGrid_570ce0828f81a2c1]);
        }

        jint AtmosphericComputationParameters::getNbPixelGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixelGrid_570ce0828f81a2c1]);
        }

        ::java::lang::String AtmosphericComputationParameters::getSensorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_11b109bd155ca898]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getUgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUgrid_60c7040667a7dc5c]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getVgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVgrid_60c7040667a7dc5c]));
        }

        void AtmosphericComputationParameters::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_6f37635c3285dbdf], a0, a1);
        }

        void AtmosphericComputationParameters::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_17db3a65980d3441], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {
        static PyObject *t_AtmosphericComputationParameters_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericComputationParameters_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AtmosphericComputationParameters_init_(t_AtmosphericComputationParameters *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AtmosphericComputationParameters_configureCorrectionGrid(t_AtmosphericComputationParameters *self, PyObject *args);
        static PyObject *t_AtmosphericComputationParameters_getDefaultInverseLocMargin(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getInverseLocMargin(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getMaxLineSensor(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getMinLineSensor(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getNbLineGrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getNbPixelGrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getSensorName(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getUgrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getVgrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_setGridSteps(t_AtmosphericComputationParameters *self, PyObject *args);
        static PyObject *t_AtmosphericComputationParameters_setInverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg);
        static PyObject *t_AtmosphericComputationParameters_get__defaultInverseLocMargin(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__inverseLocMargin(t_AtmosphericComputationParameters *self, void *data);
        static int t_AtmosphericComputationParameters_set__inverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__maxLineSensor(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__minLineSensor(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__nbLineGrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__nbPixelGrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__sensorName(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__ugrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__vgrid(t_AtmosphericComputationParameters *self, void *data);
        static PyGetSetDef t_AtmosphericComputationParameters__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, defaultInverseLocMargin),
          DECLARE_GETSET_FIELD(t_AtmosphericComputationParameters, inverseLocMargin),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, maxLineSensor),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, minLineSensor),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, nbLineGrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, nbPixelGrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, sensorName),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, ugrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, vgrid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericComputationParameters__methods_[] = {
          DECLARE_METHOD(t_AtmosphericComputationParameters, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getDefaultInverseLocMargin, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getInverseLocMargin, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getMaxLineSensor, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getMinLineSensor, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getNbLineGrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getNbPixelGrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getSensorName, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getUgrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getVgrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericComputationParameters)[] = {
          { Py_tp_methods, t_AtmosphericComputationParameters__methods_ },
          { Py_tp_init, (void *) t_AtmosphericComputationParameters_init_ },
          { Py_tp_getset, t_AtmosphericComputationParameters__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericComputationParameters)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericComputationParameters, t_AtmosphericComputationParameters, AtmosphericComputationParameters);

        void t_AtmosphericComputationParameters::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericComputationParameters), &PY_TYPE_DEF(AtmosphericComputationParameters), module, "AtmosphericComputationParameters", 0);
        }

        void t_AtmosphericComputationParameters::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "class_", make_descriptor(AtmosphericComputationParameters::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "wrapfn_", make_descriptor(t_AtmosphericComputationParameters::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericComputationParameters_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericComputationParameters::initializeClass, 1)))
            return NULL;
          return t_AtmosphericComputationParameters::wrap_Object(AtmosphericComputationParameters(((t_AtmosphericComputationParameters *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericComputationParameters_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericComputationParameters::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AtmosphericComputationParameters_init_(t_AtmosphericComputationParameters *self, PyObject *args, PyObject *kwds)
        {
          AtmosphericComputationParameters object((jobject) NULL);

          INT_CALL(object = AtmosphericComputationParameters());
          self->object = object;

          return 0;
        }

        static PyObject *t_AtmosphericComputationParameters_configureCorrectionGrid(t_AtmosphericComputationParameters *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_getDefaultInverseLocMargin(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultInverseLocMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getInverseLocMargin(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInverseLocMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getMaxLineSensor(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxLineSensor());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getMinLineSensor(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinLineSensor());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getNbLineGrid(t_AtmosphericComputationParameters *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbLineGrid());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getNbPixelGrid(t_AtmosphericComputationParameters *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixelGrid());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getSensorName(t_AtmosphericComputationParameters *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSensorName());
          return j2p(result);
        }

        static PyObject *t_AtmosphericComputationParameters_getUgrid(t_AtmosphericComputationParameters *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getUgrid());
          return result.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_getVgrid(t_AtmosphericComputationParameters *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVgrid());
          return result.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_setGridSteps(t_AtmosphericComputationParameters *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_setInverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_get__defaultInverseLocMargin(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultInverseLocMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__inverseLocMargin(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInverseLocMargin());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AtmosphericComputationParameters_set__inverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }

        static PyObject *t_AtmosphericComputationParameters_get__maxLineSensor(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxLineSensor());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__minLineSensor(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinLineSensor());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__nbLineGrid(t_AtmosphericComputationParameters *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbLineGrid());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__nbPixelGrid(t_AtmosphericComputationParameters *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixelGrid());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__sensorName(t_AtmosphericComputationParameters *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSensorName());
          return j2p(value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__ugrid(t_AtmosphericComputationParameters *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getUgrid());
          return value.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_get__vgrid(t_AtmosphericComputationParameters *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVgrid());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4E.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4E::class$ = NULL;
          jmethodID *SubFrame4E::mids$ = NULL;
          bool SubFrame4E::live$ = false;
          jint SubFrame4E::NB_AS = (jint) 0;
          jint SubFrame4E::NB_SVH = (jint) 0;

          jclass SubFrame4E::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4E");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAntiSpoofing_2235cd056f5a882b] = env->getMethodID(cls, "getAntiSpoofing", "(I)I");
              mids$[mid_getReserved10_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReserved8_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved8", "()I");
              mids$[mid_getSvHealth_2235cd056f5a882b] = env->getMethodID(cls, "getSvHealth", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_AS = env->getStaticIntField(cls, "NB_AS");
              NB_SVH = env->getStaticIntField(cls, "NB_SVH");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4E::getAntiSpoofing(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_2235cd056f5a882b], a0);
          }

          jint SubFrame4E::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_570ce0828f81a2c1]);
          }

          jint SubFrame4E::getReserved8() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved8_570ce0828f81a2c1]);
          }

          jint SubFrame4E::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_2235cd056f5a882b], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args);
          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg);
          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data);
          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data);
          static PyGetSetDef t_SubFrame4E__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4E, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4E, reserved8),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4E__methods_[] = {
            DECLARE_METHOD(t_SubFrame4E, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, getAntiSpoofing, METH_VARARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved8, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getSvHealth, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4E)[] = {
            { Py_tp_methods, t_SubFrame4E__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4E__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4E)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4E, t_SubFrame4E, SubFrame4E);

          void t_SubFrame4E::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4E), &PY_TYPE_DEF(SubFrame4E), module, "SubFrame4E", 0);
          }

          void t_SubFrame4E::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "class_", make_descriptor(SubFrame4E::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "wrapfn_", make_descriptor(t_SubFrame4E::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4E::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_AS", make_descriptor(SubFrame4E::NB_AS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_SVH", make_descriptor(SubFrame4E::NB_SVH));
          }

          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4E::initializeClass, 1)))
              return NULL;
            return t_SubFrame4E::wrap_Object(SubFrame4E(((t_SubFrame4E *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4E::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args)
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getAntiSpoofing(a0));
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(SubFrame4E), (PyObject *) self, "getAntiSpoofing", args, 2);
          }

          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved8());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved8());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042Data::class$ = NULL;
              jmethodID *Rtcm1042Data::mids$ = NULL;
              bool Rtcm1042Data::live$ = false;

              jclass Rtcm1042Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getBeidouNavigationMessage_7791a588b5aa560f] = env->getMethodID(cls, "getBeidouNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouNavigationMessage_f0e2be289a6a81c7] = env->getMethodID(cls, "getBeidouNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouToc_dff5885c2c873297] = env->getMethodID(cls, "getBeidouToc", "()D");
                  mids$[mid_getSvHealth_dff5885c2c873297] = env->getMethodID(cls, "getSvHealth", "()D");
                  mids$[mid_setBeidouNavigationMessage_68d319561ad57af5] = env->getMethodID(cls, "setBeidouNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
                  mids$[mid_setBeidouToc_17db3a65980d3441] = env->getMethodID(cls, "setBeidouToc", "(D)V");
                  mids$[mid_setSvHealth_17db3a65980d3441] = env->getMethodID(cls, "setSvHealth", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042Data::Rtcm1042Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_7791a588b5aa560f]));
              }

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_f0e2be289a6a81c7], a0.this$));
              }

              jdouble Rtcm1042Data::getBeidouToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeidouToc_dff5885c2c873297]);
              }

              jdouble Rtcm1042Data::getSvHealth() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSvHealth_dff5885c2c873297]);
              }

              void Rtcm1042Data::setBeidouNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouNavigationMessage_68d319561ad57af5], a0.this$);
              }

              void Rtcm1042Data::setBeidouToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouToc_17db3a65980d3441], a0);
              }

              void Rtcm1042Data::setSvHealth(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSvHealth_17db3a65980d3441], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args);
              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1042Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouToc),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, svHealth),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getSvHealth, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouToc, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setSvHealth, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042Data)[] = {
                { Py_tp_methods, t_Rtcm1042Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042Data_init_ },
                { Py_tp_getset, t_Rtcm1042Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1042Data, t_Rtcm1042Data, Rtcm1042Data);

              void t_Rtcm1042Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042Data), &PY_TYPE_DEF(Rtcm1042Data), module, "Rtcm1042Data", 0);
              }

              void t_Rtcm1042Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "class_", make_descriptor(Rtcm1042Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "wrapfn_", make_descriptor(t_Rtcm1042Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042Data::wrap_Object(Rtcm1042Data(((t_Rtcm1042Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1042Data object((jobject) NULL);

                INT_CALL(object = Rtcm1042Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getBeidouNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getBeidouNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getBeidouNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSvHealth());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setBeidouNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeidouToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSvHealth(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getBeidouNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setBeidouNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeidouToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouToc", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSvHealth());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSvHealth(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleBounds::class$ = NULL;
      jmethodID *SimpleBounds::mids$ = NULL;
      bool SimpleBounds::live$ = false;

      jclass SimpleBounds::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleBounds");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_getLower_60c7040667a7dc5c] = env->getMethodID(cls, "getLower", "()[D");
          mids$[mid_getUpper_60c7040667a7dc5c] = env->getMethodID(cls, "getUpper", "()[D");
          mids$[mid_unbounded_03b3e79eff942963] = env->getStaticMethodID(cls, "unbounded", "(I)Lorg/hipparchus/optim/SimpleBounds;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleBounds::SimpleBounds(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

      JArray< jdouble > SimpleBounds::getLower() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLower_60c7040667a7dc5c]));
      }

      JArray< jdouble > SimpleBounds::getUpper() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpper_60c7040667a7dc5c]));
      }

      SimpleBounds SimpleBounds::unbounded(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleBounds(env->callStaticObjectMethod(cls, mids$[mid_unbounded_03b3e79eff942963], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data);
      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data);
      static PyGetSetDef t_SimpleBounds__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleBounds, lower),
        DECLARE_GET_FIELD(t_SimpleBounds, upper),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleBounds__methods_[] = {
        DECLARE_METHOD(t_SimpleBounds, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, getLower, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, getUpper, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, unbounded, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleBounds)[] = {
        { Py_tp_methods, t_SimpleBounds__methods_ },
        { Py_tp_init, (void *) t_SimpleBounds_init_ },
        { Py_tp_getset, t_SimpleBounds__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleBounds)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleBounds, t_SimpleBounds, SimpleBounds);

      void t_SimpleBounds::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleBounds), &PY_TYPE_DEF(SimpleBounds), module, "SimpleBounds", 0);
      }

      void t_SimpleBounds::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "class_", make_descriptor(SimpleBounds::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "wrapfn_", make_descriptor(t_SimpleBounds::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleBounds::initializeClass, 1)))
          return NULL;
        return t_SimpleBounds::wrap_Object(SimpleBounds(((t_SimpleBounds *) arg)->object.this$));
      }
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleBounds::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleBounds object((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          INT_CALL(object = SimpleBounds(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLower());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpper());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        SimpleBounds result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::SimpleBounds::unbounded(a0));
          return t_SimpleBounds::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unbounded", arg);
        return NULL;
      }

      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLower());
        return value.wrap();
      }

      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpper());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_f8f7a567969e7515] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;)Z");
                mids$[mid_valueOf_ba97dfc4480c4cda] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");
                mids$[mid_values_3fc4437687e2c37f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_f8f7a567969e7515], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ba97dfc4480c4cda], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_3fc4437687e2c37f]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ValueAndJacobianFunction::class$ = NULL;
            jmethodID *ValueAndJacobianFunction::mids$ = NULL;
            bool ValueAndJacobianFunction::live$ = false;

            jclass ValueAndJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeJacobian_1c14cec8544f26fc] = env->getMethodID(cls, "computeJacobian", "([D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_computeValue_a740f7f012972b3a] = env->getMethodID(cls, "computeValue", "([D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealMatrix ValueAndJacobianFunction::computeJacobian(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeJacobian_1c14cec8544f26fc], a0.this$));
            }

            ::org::hipparchus::linear::RealVector ValueAndJacobianFunction::computeValue(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_computeValue_a740f7f012972b3a], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_ValueAndJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_ValueAndJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeJacobian, METH_O),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeValue, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ValueAndJacobianFunction)[] = {
              { Py_tp_methods, t_ValueAndJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ValueAndJacobianFunction)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction),
              NULL
            };

            DEFINE_TYPE(ValueAndJacobianFunction, t_ValueAndJacobianFunction, ValueAndJacobianFunction);

            void t_ValueAndJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(ValueAndJacobianFunction), &PY_TYPE_DEF(ValueAndJacobianFunction), module, "ValueAndJacobianFunction", 0);
            }

            void t_ValueAndJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "class_", make_descriptor(ValueAndJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "wrapfn_", make_descriptor(t_ValueAndJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ValueAndJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_ValueAndJacobianFunction::wrap_Object(ValueAndJacobianFunction(((t_ValueAndJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ValueAndJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeJacobian(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeJacobian", arg);
              return NULL;
            }

            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeValue(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeValue", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
