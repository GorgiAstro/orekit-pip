#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MappingFunction::class$ = NULL;
          jmethodID *MappingFunction::mids$ = NULL;
          bool MappingFunction::live$ = false;

          jclass MappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactors_7ef12dc9276409e6] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6f55c0ac27817ed2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MappingFunction::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7ef12dc9276409e6], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MappingFunction::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6f55c0ac27817ed2], a0, a1.this$, a2.this$));
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args);

          static PyMethodDef t_MappingFunction__methods_[] = {
            DECLARE_METHOD(t_MappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MappingFunction)[] = {
            { Py_tp_methods, t_MappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MappingFunction, t_MappingFunction, MappingFunction);

          void t_MappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(MappingFunction), &PY_TYPE_DEF(MappingFunction), module, "MappingFunction", 0);
          }

          void t_MappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "class_", make_descriptor(MappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "wrapfn_", make_descriptor(t_MappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MappingFunction::initializeClass, 1)))
              return NULL;
            return t_MappingFunction::wrap_Object(MappingFunction(((t_MappingFunction *) arg)->object.this$));
          }
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateFunction::class$ = NULL;
      jmethodID *MultivariateFunction::mids$ = NULL;
      bool MultivariateFunction::live$ = false;

      jclass MultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "value", "([D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateFunction::value(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_9dc1ec0bcc0a9a29], a0.this$);
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
      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateFunction)[] = {
        { Py_tp_methods, t_MultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateFunction, t_MultivariateFunction, MultivariateFunction);

      void t_MultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateFunction), &PY_TYPE_DEF(MultivariateFunction), module, "MultivariateFunction", 0);
      }

      void t_MultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "class_", make_descriptor(MultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "wrapfn_", make_descriptor(t_MultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateFunction::wrap_Object(MultivariateFunction(((t_MultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalOrbitalFrame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalOrbitalFrame::class$ = NULL;
      jmethodID *LocalOrbitalFrame::mids$ = NULL;
      bool LocalOrbitalFrame::live$ = false;

      jclass LocalOrbitalFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalOrbitalFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_afd05c57cd718568] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/orekit/utils/PVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalOrbitalFrame::LocalOrbitalFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_afd05c57cd718568, a0.this$, a1.this$, a2.this$, a3.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LocalOrbitalFrame__methods_[] = {
        DECLARE_METHOD(t_LocalOrbitalFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalOrbitalFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalOrbitalFrame)[] = {
        { Py_tp_methods, t_LocalOrbitalFrame__methods_ },
        { Py_tp_init, (void *) t_LocalOrbitalFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalOrbitalFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(LocalOrbitalFrame, t_LocalOrbitalFrame, LocalOrbitalFrame);

      void t_LocalOrbitalFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalOrbitalFrame), &PY_TYPE_DEF(LocalOrbitalFrame), module, "LocalOrbitalFrame", 0);
      }

      void t_LocalOrbitalFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "class_", make_descriptor(LocalOrbitalFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "wrapfn_", make_descriptor(t_LocalOrbitalFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalOrbitalFrame::initializeClass, 1)))
          return NULL;
        return t_LocalOrbitalFrame::wrap_Object(LocalOrbitalFrame(((t_LocalOrbitalFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalOrbitalFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::LOF a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        LocalOrbitalFrame object((jobject) NULL);

        if (!parseArgs(args, "kkks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LocalOrbitalFrame(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrDataField::class$ = NULL;
          jmethodID *IgsSsrDataField::mids$ = NULL;
          bool IgsSsrDataField::live$ = false;
          IgsSsrDataField *IgsSsrDataField::IDF001 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF002 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF003 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF004 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF005 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF006 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF007 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF008 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF009 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF010 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF011 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF012 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF013 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF014 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF015 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF016 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF017 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF018 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF019 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF020 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF021 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF022 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF023 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF024 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF025 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF026 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF027 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF028 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF029 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF030 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF031 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF032 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF033 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF034 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF035 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF036 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF037 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF038 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF039 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF040 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF041 = NULL;

          jclass IgsSsrDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_7a2bfdb291445824] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");
              mids$[mid_values_953a8768ccab919f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDF001 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF001", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF002 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF002", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF003 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF003", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF004 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF004", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF005 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF005", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF006 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF006", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF007 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF007", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF008 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF008", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF009 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF009", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF010 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF010", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF011 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF011", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF012 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF012", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF013 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF013", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF014 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF014", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF015 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF015", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF016 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF016", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF017 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF017", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF018 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF018", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF019 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF019", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF020 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF020", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF021 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF021", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF022 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF022", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF023 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF023", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF024 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF024", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF025 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF025", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF026 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF026", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF027 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF027", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF028 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF028", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF029 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF029", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF030 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF030", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF031 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF031", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF032 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF032", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF033 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF033", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF034 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF034", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF035 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF035", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF036 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF036", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF037 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF037", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF038 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF038", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF039 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF039", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF040 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF040", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF041 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF041", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrDataField IgsSsrDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7a2bfdb291445824], a0.this$));
          }

          JArray< IgsSsrDataField > IgsSsrDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_953a8768ccab919f]));
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
        namespace parser {
          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args);
          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type);
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data);
          static PyGetSetDef t_IgsSsrDataField__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrDataField__methods_[] = {
            DECLARE_METHOD(t_IgsSsrDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrDataField)[] = {
            { Py_tp_methods, t_IgsSsrDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrDataField, t_IgsSsrDataField, IgsSsrDataField);
          PyObject *t_IgsSsrDataField::wrap_Object(const IgsSsrDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrDataField), &PY_TYPE_DEF(IgsSsrDataField), module, "IgsSsrDataField", 0);
          }

          void t_IgsSsrDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "class_", make_descriptor(IgsSsrDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "wrapfn_", make_descriptor(t_IgsSsrDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF001", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF002", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF003", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF004", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF004)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF005", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF006", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF007", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF008", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF009", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF010", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF010)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF011", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF011)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF012", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF012)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF013", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF013)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF014", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF015", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF015)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF016", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF016)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF017", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF017)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF018", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF018)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF019", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF020", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF021", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF021)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF022", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF022)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF023", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF023)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF024", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF024)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF025", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF025)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF026", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF026)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF027", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF027)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF028", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF028)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF029", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF029)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF030", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF030)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF031", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF031)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF032", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF032)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF033", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF033)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF034", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF034)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF035", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF035)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF036", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF036)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF037", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF037)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF038", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF039", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF039)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF040", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF041", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF041)));
          }

          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrDataField::initializeClass, 1)))
              return NULL;
            return t_IgsSsrDataField::wrap_Object(IgsSsrDataField(((t_IgsSsrDataField *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::valueOf(a0));
              return t_IgsSsrDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type)
          {
            JArray< IgsSsrDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrDataField::wrap_jobject);
          }
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4D::class$ = NULL;
          jmethodID *SubFrame4D::mids$ = NULL;
          bool SubFrame4D::live$ = false;

          jclass SubFrame4D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA0_dff5885c2c873297] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_dff5885c2c873297] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getAlpha0_dff5885c2c873297] = env->getMethodID(cls, "getAlpha0", "()D");
              mids$[mid_getAlpha1_dff5885c2c873297] = env->getMethodID(cls, "getAlpha1", "()D");
              mids$[mid_getAlpha2_dff5885c2c873297] = env->getMethodID(cls, "getAlpha2", "()D");
              mids$[mid_getAlpha3_dff5885c2c873297] = env->getMethodID(cls, "getAlpha3", "()D");
              mids$[mid_getBeta0_dff5885c2c873297] = env->getMethodID(cls, "getBeta0", "()D");
              mids$[mid_getBeta1_dff5885c2c873297] = env->getMethodID(cls, "getBeta1", "()D");
              mids$[mid_getBeta2_dff5885c2c873297] = env->getMethodID(cls, "getBeta2", "()D");
              mids$[mid_getBeta3_dff5885c2c873297] = env->getMethodID(cls, "getBeta3", "()D");
              mids$[mid_getDeltaTLs_570ce0828f81a2c1] = env->getMethodID(cls, "getDeltaTLs", "()I");
              mids$[mid_getDeltaTLsf_570ce0828f81a2c1] = env->getMethodID(cls, "getDeltaTLsf", "()I");
              mids$[mid_getDn_570ce0828f81a2c1] = env->getMethodID(cls, "getDn", "()I");
              mids$[mid_getReserved10_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getTot_570ce0828f81a2c1] = env->getMethodID(cls, "getTot", "()I");
              mids$[mid_getWeekNumberLsf_570ce0828f81a2c1] = env->getMethodID(cls, "getWeekNumberLsf", "()I");
              mids$[mid_getWeekNumberT_570ce0828f81a2c1] = env->getMethodID(cls, "getWeekNumberT", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame4D::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getAlpha0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha0_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getAlpha1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha1_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getAlpha2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha2_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getAlpha3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha3_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getBeta0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta0_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getBeta1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta1_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getBeta2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta2_dff5885c2c873297]);
          }

          jdouble SubFrame4D::getBeta3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta3_dff5885c2c873297]);
          }

          jint SubFrame4D::getDeltaTLs() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLs_570ce0828f81a2c1]);
          }

          jint SubFrame4D::getDeltaTLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLsf_570ce0828f81a2c1]);
          }

          jint SubFrame4D::getDn() const
          {
            return env->callIntMethod(this$, mids$[mid_getDn_570ce0828f81a2c1]);
          }

          jint SubFrame4D::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_570ce0828f81a2c1]);
          }

          jint SubFrame4D::getTot() const
          {
            return env->callIntMethod(this$, mids$[mid_getTot_570ce0828f81a2c1]);
          }

          jint SubFrame4D::getWeekNumberLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberLsf_570ce0828f81a2c1]);
          }

          jint SubFrame4D::getWeekNumberT() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberT_570ce0828f81a2c1]);
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
          static PyObject *t_SubFrame4D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4D_getA0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getA1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha2(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha3(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta2(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta3(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDeltaTLs(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDeltaTLsf(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDn(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getReserved10(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getTot(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getWeekNumberLsf(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getWeekNumberT(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_get__a0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__a1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha2(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha3(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta2(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta3(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__deltaTLs(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__deltaTLsf(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__dn(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__reserved10(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__tot(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__weekNumberLsf(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__weekNumberT(t_SubFrame4D *self, void *data);
          static PyGetSetDef t_SubFrame4D__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4D, a0),
            DECLARE_GET_FIELD(t_SubFrame4D, a1),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha0),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha1),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha2),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha3),
            DECLARE_GET_FIELD(t_SubFrame4D, beta0),
            DECLARE_GET_FIELD(t_SubFrame4D, beta1),
            DECLARE_GET_FIELD(t_SubFrame4D, beta2),
            DECLARE_GET_FIELD(t_SubFrame4D, beta3),
            DECLARE_GET_FIELD(t_SubFrame4D, deltaTLs),
            DECLARE_GET_FIELD(t_SubFrame4D, deltaTLsf),
            DECLARE_GET_FIELD(t_SubFrame4D, dn),
            DECLARE_GET_FIELD(t_SubFrame4D, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4D, tot),
            DECLARE_GET_FIELD(t_SubFrame4D, weekNumberLsf),
            DECLARE_GET_FIELD(t_SubFrame4D, weekNumberT),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4D__methods_[] = {
            DECLARE_METHOD(t_SubFrame4D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4D, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha3, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta3, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDeltaTLs, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDeltaTLsf, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDn, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getTot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getWeekNumberLsf, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getWeekNumberT, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4D)[] = {
            { Py_tp_methods, t_SubFrame4D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4D)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4D, t_SubFrame4D, SubFrame4D);

          void t_SubFrame4D::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4D), &PY_TYPE_DEF(SubFrame4D), module, "SubFrame4D", 0);
          }

          void t_SubFrame4D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "class_", make_descriptor(SubFrame4D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "wrapfn_", make_descriptor(t_SubFrame4D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4D::initializeClass, 1)))
              return NULL;
            return t_SubFrame4D::wrap_Object(SubFrame4D(((t_SubFrame4D *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4D_getA0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getA1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha2(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha3(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta2(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta3(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getDeltaTLs(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDeltaTLs());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getDeltaTLsf(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDeltaTLsf());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getDn(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getReserved10(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getTot(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTot());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getWeekNumberLsf(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumberLsf());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getWeekNumberT(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumberT());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_get__a0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__a1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha2(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha3(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha3());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta2(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta3(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta3());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__deltaTLs(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDeltaTLs());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__deltaTLsf(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDeltaTLsf());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__dn(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__reserved10(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__tot(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTot());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__weekNumberLsf(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumberLsf());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__weekNumberT(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumberT());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IntegrationReference::class$ = NULL;
            jmethodID *IntegrationReference::mids$ = NULL;
            bool IntegrationReference::live$ = false;
            IntegrationReference *IntegrationReference::END = NULL;
            IntegrationReference *IntegrationReference::MIDDLE = NULL;
            IntegrationReference *IntegrationReference::START = NULL;

            jclass IntegrationReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IntegrationReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_ec06b1d33f1a7a01] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_values_b68390f3f4c277d2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                END = new IntegrationReference(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                MIDDLE = new IntegrationReference(env->getStaticObjectField(cls, "MIDDLE", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                START = new IntegrationReference(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IntegrationReference IntegrationReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return IntegrationReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ec06b1d33f1a7a01], a0.this$));
            }

            JArray< IntegrationReference > IntegrationReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< IntegrationReference >(env->callStaticObjectMethod(cls, mids$[mid_values_b68390f3f4c277d2]));
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
          namespace tdm {
            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args);
            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_IntegrationReference_values(PyTypeObject *type);
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data);
            static PyGetSetDef t_IntegrationReference__fields_[] = {
              DECLARE_GET_FIELD(t_IntegrationReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IntegrationReference__methods_[] = {
              DECLARE_METHOD(t_IntegrationReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_IntegrationReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IntegrationReference)[] = {
              { Py_tp_methods, t_IntegrationReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_IntegrationReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IntegrationReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(IntegrationReference, t_IntegrationReference, IntegrationReference);
            PyObject *t_IntegrationReference::wrap_Object(const IntegrationReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_IntegrationReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_IntegrationReference::install(PyObject *module)
            {
              installType(&PY_TYPE(IntegrationReference), &PY_TYPE_DEF(IntegrationReference), module, "IntegrationReference", 0);
            }

            void t_IntegrationReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "class_", make_descriptor(IntegrationReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "wrapfn_", make_descriptor(t_IntegrationReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(IntegrationReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "END", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "MIDDLE", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::MIDDLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "START", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::START)));
            }

            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IntegrationReference::initializeClass, 1)))
                return NULL;
              return t_IntegrationReference::wrap_Object(IntegrationReference(((t_IntegrationReference *) arg)->object.this$));
            }
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IntegrationReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              IntegrationReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::valueOf(a0));
                return t_IntegrationReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_IntegrationReference_values(PyTypeObject *type)
            {
              JArray< IntegrationReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::values());
              return JArray<jobject>(result.this$).wrap(t_IntegrationReference::wrap_jobject);
            }
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadata::class$ = NULL;
            jmethodID *OdmMetadata::mids$ = NULL;
            bool OdmMetadata::live$ = false;

            jclass OdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getObjectName_11b109bd155ca898] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setObjectName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String OdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_11b109bd155ca898]));
            }

            void OdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_d0bc48d5b00dc40c], a0.this$);
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
            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self);
            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg);
            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data);
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_OdmMetadata, setObjectName, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadata)[] = {
              { Py_tp_methods, t_OdmMetadata__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(OdmMetadata, t_OdmMetadata, OdmMetadata);

            void t_OdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadata), &PY_TYPE_DEF(OdmMetadata), module, "OdmMetadata", 0);
            }

            void t_OdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "class_", make_descriptor(OdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "wrapfn_", make_descriptor(t_OdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmMetadata::wrap_Object(OdmMetadata(((t_OdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/LoxodromeArc.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LoxodromeArc::class$ = NULL;
      jmethodID *LoxodromeArc::mids$ = NULL;
      bool LoxodromeArc::live$ = false;

      jclass LoxodromeArc::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LoxodromeArc");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e382dba4b5c7f7ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_bba3738469ae684f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_calculatePointAlongArc_a6daea86c60e2668] = env->getMethodID(cls, "calculatePointAlongArc", "(D)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getDistance_dff5885c2c873297] = env->getMethodID(cls, "getDistance", "()D");
          mids$[mid_getFinalPoint_82d0a9bcd06489bb] = env->getMethodID(cls, "getFinalPoint", "()Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_e382dba4b5c7f7ec, a0.this$, a1.this$, a2.this$)) {}

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_bba3738469ae684f, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::calculatePointAlongArc(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_calculatePointAlongArc_a6daea86c60e2668], a0));
      }

      jdouble LoxodromeArc::getDistance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_dff5885c2c873297]);
      }

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::getFinalPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getFinalPoint_82d0a9bcd06489bb]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg);
      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data);
      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data);
      static PyGetSetDef t_LoxodromeArc__fields_[] = {
        DECLARE_GET_FIELD(t_LoxodromeArc, distance),
        DECLARE_GET_FIELD(t_LoxodromeArc, finalPoint),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoxodromeArc__methods_[] = {
        DECLARE_METHOD(t_LoxodromeArc, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, calculatePointAlongArc, METH_O),
        DECLARE_METHOD(t_LoxodromeArc, getDistance, METH_NOARGS),
        DECLARE_METHOD(t_LoxodromeArc, getFinalPoint, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoxodromeArc)[] = {
        { Py_tp_methods, t_LoxodromeArc__methods_ },
        { Py_tp_init, (void *) t_LoxodromeArc_init_ },
        { Py_tp_getset, t_LoxodromeArc__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoxodromeArc)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Loxodrome),
        NULL
      };

      DEFINE_TYPE(LoxodromeArc, t_LoxodromeArc, LoxodromeArc);

      void t_LoxodromeArc::install(PyObject *module)
      {
        installType(&PY_TYPE(LoxodromeArc), &PY_TYPE_DEF(LoxodromeArc), module, "LoxodromeArc", 0);
      }

      void t_LoxodromeArc::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "class_", make_descriptor(LoxodromeArc::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "wrapfn_", make_descriptor(t_LoxodromeArc::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoxodromeArc::initializeClass, 1)))
          return NULL;
        return t_LoxodromeArc::wrap_Object(LoxodromeArc(((t_LoxodromeArc *) arg)->object.this$));
      }
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoxodromeArc::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2, a3));
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

      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.calculatePointAlongArc(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "calculatePointAlongArc", arg);
        return NULL;
      }

      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDistance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDistance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView$DefiningConeType::class$ = NULL;
        jmethodID *PolygonalFieldOfView$DefiningConeType::mids$ = NULL;
        bool PolygonalFieldOfView$DefiningConeType::live$ = false;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = NULL;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = NULL;

        jclass PolygonalFieldOfView$DefiningConeType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_a4000e9917488440] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_values_a3253f5ff3568304] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_verticesRadius_948617e69b66e15d] = env->getMethodID(cls, "verticesRadius", "(DI)D");
            mids$[mid_createVertex_5c226f3c91080757] = env->getMethodID(cls, "createVertex", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DI)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView$DefiningConeType PolygonalFieldOfView$DefiningConeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PolygonalFieldOfView$DefiningConeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a4000e9917488440], a0.this$));
        }

        JArray< PolygonalFieldOfView$DefiningConeType > PolygonalFieldOfView$DefiningConeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PolygonalFieldOfView$DefiningConeType >(env->callStaticObjectMethod(cls, mids$[mid_values_a3253f5ff3568304]));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView$DefiningConeType__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView$DefiningConeType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView$DefiningConeType__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, of_, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView$DefiningConeType)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView$DefiningConeType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PolygonalFieldOfView$DefiningConeType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView$DefiningConeType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView$DefiningConeType, t_PolygonalFieldOfView$DefiningConeType, PolygonalFieldOfView$DefiningConeType);
        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_Object(const PolygonalFieldOfView$DefiningConeType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PolygonalFieldOfView$DefiningConeType::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView$DefiningConeType), &PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType), module, "PolygonalFieldOfView$DefiningConeType", 0);
        }

        void t_PolygonalFieldOfView$DefiningConeType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "class_", make_descriptor(PolygonalFieldOfView$DefiningConeType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "wrapfn_", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "boxfn_", make_descriptor(boxObject));
          env->getClass(PolygonalFieldOfView$DefiningConeType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES)));
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(PolygonalFieldOfView$DefiningConeType(((t_PolygonalFieldOfView$DefiningConeType *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PolygonalFieldOfView$DefiningConeType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::valueOf(a0));
            return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type)
        {
          JArray< PolygonalFieldOfView$DefiningConeType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::values());
          return JArray<jobject>(result.this$).wrap(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject);
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Pow.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Pow::class$ = NULL;
        jmethodID *Pow::mids$ = NULL;
        bool Pow::live$ = false;

        jclass Pow::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Pow");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Pow::Pow() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Pow::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
      namespace function {
        static PyObject *t_Pow_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Pow_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Pow_init_(t_Pow *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Pow_value(t_Pow *self, PyObject *args);

        static PyMethodDef t_Pow__methods_[] = {
          DECLARE_METHOD(t_Pow, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Pow, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Pow, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Pow)[] = {
          { Py_tp_methods, t_Pow__methods_ },
          { Py_tp_init, (void *) t_Pow_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Pow)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Pow, t_Pow, Pow);

        void t_Pow::install(PyObject *module)
        {
          installType(&PY_TYPE(Pow), &PY_TYPE_DEF(Pow), module, "Pow", 0);
        }

        void t_Pow::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "class_", make_descriptor(Pow::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "wrapfn_", make_descriptor(t_Pow::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Pow_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Pow::initializeClass, 1)))
            return NULL;
          return t_Pow::wrap_Object(Pow(((t_Pow *) arg)->object.this$));
        }
        static PyObject *t_Pow_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Pow::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Pow_init_(t_Pow *self, PyObject *args, PyObject *kwds)
        {
          Pow object((jobject) NULL);

          INT_CALL(object = Pow());
          self->object = object;

          return 0;
        }

        static PyObject *t_Pow_value(t_Pow *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeRateTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e4962f34ea61659] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateTroposphericDelayModifier::BistaticRangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_3e4962f34ea61659, a0.this$)) {}

          void BistaticRangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void BistaticRangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeRateTroposphericDelayModifier_init_(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modify(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateTroposphericDelayModifier, t_BistaticRangeRateTroposphericDelayModifier, BistaticRangeRateTroposphericDelayModifier);

          void t_BistaticRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeRateTroposphericDelayModifier), module, "BistaticRangeRateTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateTroposphericDelayModifier::wrap_Object(BistaticRangeRateTroposphericDelayModifier(((t_BistaticRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeRateTroposphericDelayModifier_init_(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeRateTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modify(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagator::class$ = NULL;
          jmethodID *GNSSPropagator::mids$ = NULL;
          bool GNSSPropagator::live$ = false;

          jclass GNSSPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_b86f9f61d97a7244] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_b86f9f61d97a7244] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_dff5885c2c873297] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getOrbitalElements_40a724068071d44b] = env->getMethodID(cls, "getOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;");
              mids$[mid_propagateInEcef_38efe74c9e3a1286] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_b86f9f61d97a7244]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_b86f9f61d97a7244]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          jdouble GNSSPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_dff5885c2c873297]);
          }

          ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements GNSSPropagator::getOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getOrbitalElements_40a724068071d44b]));
          }

          ::org::orekit::utils::PVCoordinates GNSSPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_38efe74c9e3a1286], a0.this$));
          }

          void GNSSPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
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
      namespace analytical {
        namespace gnss {
          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg);
          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data);
          static PyGetSetDef t_GNSSPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GNSSPropagator, eCEF),
            DECLARE_GET_FIELD(t_GNSSPropagator, eCI),
            DECLARE_GET_FIELD(t_GNSSPropagator, frame),
            DECLARE_GET_FIELD(t_GNSSPropagator, mU),
            DECLARE_GET_FIELD(t_GNSSPropagator, orbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GNSSPropagator__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GNSSPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GNSSPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagator)[] = {
            { Py_tp_methods, t_GNSSPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GNSSPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GNSSPropagator, t_GNSSPropagator, GNSSPropagator);

          void t_GNSSPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagator), &PY_TYPE_DEF(GNSSPropagator), module, "GNSSPropagator", 0);
          }

          void t_GNSSPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "class_", make_descriptor(GNSSPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "wrapfn_", make_descriptor(t_GNSSPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagator::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagator::wrap_Object(GNSSPropagator(((t_GNSSPropagator *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterConsumer::mids$ = NULL;
            bool ParseToken$CenterConsumer::live$ = false;

            jclass ParseToken$CenterConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_32e120c3a0353f27] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterConsumer::accept(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_32e120c3a0353f27], a0.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$CenterConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterConsumer_accept(t_ParseToken$CenterConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterConsumer, t_ParseToken$CenterConsumer, ParseToken$CenterConsumer);

            void t_ParseToken$CenterConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterConsumer), &PY_TYPE_DEF(ParseToken$CenterConsumer), module, "ParseToken$CenterConsumer", 0);
            }

            void t_ParseToken$CenterConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "class_", make_descriptor(ParseToken$CenterConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterConsumer::wrap_Object(ParseToken$CenterConsumer(((t_ParseToken$CenterConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterConsumer_accept(t_ParseToken$CenterConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceChecker::class$ = NULL;
      jmethodID *ConvergenceChecker::mids$ = NULL;
      bool ConvergenceChecker::live$ = false;

      jclass ConvergenceChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_converged_7c442e0e70a8e8da] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_7c442e0e70a8e8da], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceChecker_of_(t_ConvergenceChecker *self, PyObject *args);
      static PyObject *t_ConvergenceChecker_converged(t_ConvergenceChecker *self, PyObject *args);
      static PyObject *t_ConvergenceChecker_get__parameters_(t_ConvergenceChecker *self, void *data);
      static PyGetSetDef t_ConvergenceChecker__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceChecker__methods_[] = {
        DECLARE_METHOD(t_ConvergenceChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceChecker)[] = {
        { Py_tp_methods, t_ConvergenceChecker__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ConvergenceChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceChecker)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceChecker, t_ConvergenceChecker, ConvergenceChecker);
      PyObject *t_ConvergenceChecker::wrap_Object(const ConvergenceChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceChecker *self = (t_ConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceChecker *self = (t_ConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceChecker), &PY_TYPE_DEF(ConvergenceChecker), module, "ConvergenceChecker", 0);
      }

      void t_ConvergenceChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "class_", make_descriptor(ConvergenceChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "wrapfn_", make_descriptor(t_ConvergenceChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceChecker::initializeClass, 1)))
          return NULL;
        return t_ConvergenceChecker::wrap_Object(ConvergenceChecker(((t_ConvergenceChecker *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceChecker_of_(t_ConvergenceChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ConvergenceChecker_converged(t_ConvergenceChecker *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceChecker_get__parameters_(t_ConvergenceChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *J2SquaredModel::class$ = NULL;
            jmethodID *J2SquaredModel::mids$ = NULL;
            bool J2SquaredModel::live$ = false;

            jclass J2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_03e8bdfa525c3779] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_1a8550c5c09a5c40] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_03e8bdfa525c3779], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_1a8550c5c09a5c40], a0.this$));
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
          namespace forces {
            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args);

            static PyMethodDef t_J2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_J2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(J2SquaredModel)[] = {
              { Py_tp_methods, t_J2SquaredModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(J2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(J2SquaredModel, t_J2SquaredModel, J2SquaredModel);

            void t_J2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(J2SquaredModel), &PY_TYPE_DEF(J2SquaredModel), module, "J2SquaredModel", 0);
            }

            void t_J2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "class_", make_descriptor(J2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "wrapfn_", make_descriptor(t_J2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, J2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_J2SquaredModel::wrap_Object(J2SquaredModel(((t_J2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, J2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
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
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LazyLoadedCelestialBodies::class$ = NULL;
      jmethodID *LazyLoadedCelestialBodies::mids$ = NULL;
      bool LazyLoadedCelestialBodies::live$ = false;

      jclass LazyLoadedCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LazyLoadedCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4af8a8f1bc66ed68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_addCelestialBodyLoader_eeafd0d01c10e9d5] = env->getMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_d0bc48d5b00dc40c] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_6a2001eff0605f71] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_0fa09c18fee449d5] = env->getMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_d0bc48d5b00dc40c] = env->getMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_0fa09c18fee449d5] = env->getMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_d0bc48d5b00dc40c] = env->getMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_68e48076ef831536] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_624686a38a6b107c] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_624686a38a6b107c] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_624686a38a6b107c] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_624686a38a6b107c] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_624686a38a6b107c] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_624686a38a6b107c] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_624686a38a6b107c] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_624686a38a6b107c] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_624686a38a6b107c] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_624686a38a6b107c] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_624686a38a6b107c] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_624686a38a6b107c] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_624686a38a6b107c] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedCelestialBodies::LazyLoadedCelestialBodies(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4af8a8f1bc66ed68, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedCelestialBodies::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addCelestialBodyLoader_eeafd0d01c10e9d5], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_d0bc48d5b00dc40c], a0.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_6a2001eff0605f71], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_0fa09c18fee449d5]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_d0bc48d5b00dc40c], a0.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_0fa09c18fee449d5]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_d0bc48d5b00dc40c], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_68e48076ef831536], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_624686a38a6b107c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyGetSetDef t_LazyLoadedCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earth),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mars),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mercury),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, moon),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, neptune),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, pluto),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, saturn),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, sun),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, uranus),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addDefaultCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyCache, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedCelestialBodies)[] = {
        { Py_tp_methods, t_LazyLoadedCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedCelestialBodies_init_ },
        { Py_tp_getset, t_LazyLoadedCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedCelestialBodies, t_LazyLoadedCelestialBodies, LazyLoadedCelestialBodies);

      void t_LazyLoadedCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedCelestialBodies), &PY_TYPE_DEF(LazyLoadedCelestialBodies), module, "LazyLoadedCelestialBodies", 0);
      }

      void t_LazyLoadedCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "class_", make_descriptor(LazyLoadedCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "wrapfn_", make_descriptor(t_LazyLoadedCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedCelestialBodies::wrap_Object(LazyLoadedCelestialBodies(((t_LazyLoadedCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        LazyLoadedCelestialBodies object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedCelestialBodies(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/Mesh$Node.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Mesh$Node::class$ = NULL;
          jmethodID *Mesh$Node::mids$ = NULL;
          bool Mesh$Node::live$ = false;

          jclass Mesh$Node::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Mesh$Node");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcross_d52645e0d4c07563] = env->getMethodID(cls, "getAcross", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcrossIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getAcrossIndex", "()I");
              mids$[mid_getAlong_d52645e0d4c07563] = env->getMethodID(cls, "getAlong", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAlongIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getAlongIndex", "()I");
              mids$[mid_getS2P_fe1c7ad511d8448b] = env->getMethodID(cls, "getS2P", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getV_d52645e0d4c07563] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isEnabled_b108b35ef48e27bd] = env->getMethodID(cls, "isEnabled", "()Z");
              mids$[mid_isInside_b108b35ef48e27bd] = env->getMethodID(cls, "isInside", "()Z");
              mids$[mid_move_490efaeb06700c2c] = env->getMethodID(cls, "move", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_setEnabled_0fa09c18fee449d5] = env->getMethodID(cls, "setEnabled", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAcross() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcross_d52645e0d4c07563]));
          }

          jint Mesh$Node::getAcrossIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAcrossIndex_570ce0828f81a2c1]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAlong() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAlong_d52645e0d4c07563]));
          }

          jint Mesh$Node::getAlongIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlongIndex_570ce0828f81a2c1]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::getS2P() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getS2P_fe1c7ad511d8448b]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_d52645e0d4c07563]));
          }

          jboolean Mesh$Node::isEnabled() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEnabled_b108b35ef48e27bd]);
          }

          jboolean Mesh$Node::isInside() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInside_b108b35ef48e27bd]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::move(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_move_490efaeb06700c2c], a0.this$));
          }

          void Mesh$Node::setEnabled() const
          {
            env->callVoidMethod(this$, mids$[mid_setEnabled_0fa09c18fee449d5]);
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
    namespace models {
      namespace earth {
        namespace tessellation {
          static PyObject *t_Mesh$Node_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mesh$Node_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mesh$Node_getAcross(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAcrossIndex(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAlong(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAlongIndex(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getS2P(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getV(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_isEnabled(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_isInside(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_move(t_Mesh$Node *self, PyObject *arg);
          static PyObject *t_Mesh$Node_setEnabled(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_get__across(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__acrossIndex(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__along(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__alongIndex(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__enabled(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__inside(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__s2P(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__v(t_Mesh$Node *self, void *data);
          static PyGetSetDef t_Mesh$Node__fields_[] = {
            DECLARE_GET_FIELD(t_Mesh$Node, across),
            DECLARE_GET_FIELD(t_Mesh$Node, acrossIndex),
            DECLARE_GET_FIELD(t_Mesh$Node, along),
            DECLARE_GET_FIELD(t_Mesh$Node, alongIndex),
            DECLARE_GET_FIELD(t_Mesh$Node, enabled),
            DECLARE_GET_FIELD(t_Mesh$Node, inside),
            DECLARE_GET_FIELD(t_Mesh$Node, s2P),
            DECLARE_GET_FIELD(t_Mesh$Node, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mesh$Node__methods_[] = {
            DECLARE_METHOD(t_Mesh$Node, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mesh$Node, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mesh$Node, getAcross, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAcrossIndex, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAlong, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAlongIndex, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getS2P, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getV, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, isEnabled, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, isInside, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, move, METH_O),
            DECLARE_METHOD(t_Mesh$Node, setEnabled, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mesh$Node)[] = {
            { Py_tp_methods, t_Mesh$Node__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Mesh$Node__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mesh$Node)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Mesh$Node, t_Mesh$Node, Mesh$Node);

          void t_Mesh$Node::install(PyObject *module)
          {
            installType(&PY_TYPE(Mesh$Node), &PY_TYPE_DEF(Mesh$Node), module, "Mesh$Node", 0);
          }

          void t_Mesh$Node::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "class_", make_descriptor(Mesh$Node::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "wrapfn_", make_descriptor(t_Mesh$Node::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mesh$Node_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mesh$Node::initializeClass, 1)))
              return NULL;
            return t_Mesh$Node::wrap_Object(Mesh$Node(((t_Mesh$Node *) arg)->object.this$));
          }
          static PyObject *t_Mesh$Node_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mesh$Node::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Mesh$Node_getAcross(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAcross());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getAcrossIndex(t_Mesh$Node *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAcrossIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Mesh$Node_getAlong(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlong());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getAlongIndex(t_Mesh$Node *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlongIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Mesh$Node_getS2P(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getS2P());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getV(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_isEnabled(t_Mesh$Node *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isEnabled());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Mesh$Node_isInside(t_Mesh$Node *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInside());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Mesh$Node_move(t_Mesh$Node *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.move(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "move", arg);
            return NULL;
          }

          static PyObject *t_Mesh$Node_setEnabled(t_Mesh$Node *self)
          {
            OBJ_CALL(self->object.setEnabled());
            Py_RETURN_NONE;
          }

          static PyObject *t_Mesh$Node_get__across(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAcross());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__acrossIndex(t_Mesh$Node *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAcrossIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Mesh$Node_get__along(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlong());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__alongIndex(t_Mesh$Node *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlongIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Mesh$Node_get__enabled(t_Mesh$Node *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEnabled());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Mesh$Node_get__inside(t_Mesh$Node *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInside());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Mesh$Node_get__s2P(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getS2P());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__v(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractList.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractList::class$ = NULL;
    jmethodID *AbstractList::mids$ = NULL;
    bool AbstractList::live$ = false;

    jclass AbstractList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_995c97fe5efb1d1d] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_0f52bd5f96ddfd17] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_7bdc0f15e68705e0] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_90eb61a0d5cc5e34] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_90eb61a0d5cc5e34] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_13ec0a4b5149ed65] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_167e5f47f86d3143] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_7bdc0f15e68705e0] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_set_c594b4c2255fa9ec] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_subList_10d7c0f6de166543] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_removeRange_6f37635c3285dbdf] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    void AbstractList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_995c97fe5efb1d1d], a0, a1.this$);
    }

    jboolean AbstractList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_0f52bd5f96ddfd17], a0, a1.this$);
    }

    void AbstractList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    jboolean AbstractList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object AbstractList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_7bdc0f15e68705e0], a0));
    }

    jint AbstractList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint AbstractList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_90eb61a0d5cc5e34], a0.this$);
    }

    ::java::util::Iterator AbstractList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    jint AbstractList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_90eb61a0d5cc5e34], a0.this$);
    }

    ::java::util::ListIterator AbstractList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_13ec0a4b5149ed65]));
    }

    ::java::util::ListIterator AbstractList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_167e5f47f86d3143], a0));
    }

    ::java::lang::Object AbstractList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_7bdc0f15e68705e0], a0));
    }

    ::java::lang::Object AbstractList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_c594b4c2255fa9ec], a0, a1.this$));
    }

    ::java::util::List AbstractList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_10d7c0f6de166543], a0, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data);
    static PyGetSetDef t_AbstractList__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractList__methods_[] = {
      DECLARE_METHOD(t_AbstractList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, add, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, clear, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, get, METH_O),
      DECLARE_METHOD(t_AbstractList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, indexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, lastIndexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, remove, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, set, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, subList, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractList)[] = {
      { Py_tp_methods, t_AbstractList__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractList *)) get_generic_iterator< t_AbstractList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractList, t_AbstractList, AbstractList);
    PyObject *t_AbstractList::wrap_Object(const AbstractList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractList::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractList), &PY_TYPE_DEF(AbstractList), module, "AbstractList", 0);
    }

    void t_AbstractList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "class_", make_descriptor(AbstractList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "wrapfn_", make_descriptor(t_AbstractList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractList::initializeClass, 1)))
        return NULL;
      return t_AbstractList::wrap_Object(AbstractList(((t_AbstractList *) arg)->object.this$));
    }
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      jboolean result;

      if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0, a1));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *DiscreteTroposphericModel::class$ = NULL;
          jmethodID *DiscreteTroposphericModel::mids$ = NULL;
          bool DiscreteTroposphericModel::live$ = false;

          jclass DiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/DiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement DiscreteTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble DiscreteTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_fe3b5c46874ab115], a0, a1.this$, a2.this$, a3.this$);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args);

          static PyMethodDef t_DiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_DiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_DiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(DiscreteTroposphericModel, t_DiscreteTroposphericModel, DiscreteTroposphericModel);

          void t_DiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(DiscreteTroposphericModel), &PY_TYPE_DEF(DiscreteTroposphericModel), module, "DiscreteTroposphericModel", 0);
          }

          void t_DiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "class_", make_descriptor(DiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "wrapfn_", make_descriptor(t_DiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_DiscreteTroposphericModel::wrap_Object(DiscreteTroposphericModel(((t_DiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ComparableMeasurement::class$ = NULL;
        jmethodID *ComparableMeasurement::mids$ = NULL;
        bool ComparableMeasurement::live$ = false;

        jclass ComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compareTo_aa79741dc73b1207] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_getObservedValue_60c7040667a7dc5c] = env->getMethodID(cls, "getObservedValue", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint ComparableMeasurement::compareTo(const ComparableMeasurement & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_aa79741dc73b1207], a0.this$);
        }

        JArray< jdouble > ComparableMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_60c7040667a7dc5c]));
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg);
        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self);
        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data);
        static PyGetSetDef t_ComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ComparableMeasurement, observedValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_ComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, compareTo, METH_O),
          DECLARE_METHOD(t_ComparableMeasurement, getObservedValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ComparableMeasurement)[] = {
          { Py_tp_methods, t_ComparableMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ComparableMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
          NULL
        };

        DEFINE_TYPE(ComparableMeasurement, t_ComparableMeasurement, ComparableMeasurement);

        void t_ComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ComparableMeasurement), &PY_TYPE_DEF(ComparableMeasurement), module, "ComparableMeasurement", 0);
        }

        void t_ComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "class_", make_descriptor(ComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "wrapfn_", make_descriptor(t_ComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_ComparableMeasurement::wrap_Object(ComparableMeasurement(((t_ComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg)
        {
          ComparableMeasurement a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "k", ComparableMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
          return NULL;
        }

        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Double.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterObserver::class$ = NULL;
      jmethodID *ParameterObserver::mids$ = NULL;
      bool ParameterObserver::live$ = false;

      jclass ParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_estimationTypeChanged_c5eea8698b6de721] = env->getMethodID(cls, "estimationTypeChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_maxValueChanged_fc2ef790ea55778e] = env->getMethodID(cls, "maxValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_minValueChanged_fc2ef790ea55778e] = env->getMethodID(cls, "minValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_nameChanged_e4f8d49c7ba0a1ff] = env->getMethodID(cls, "nameChanged", "(Ljava/lang/String;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceDateChanged_a6424e7ebf34e1db] = env->getMethodID(cls, "referenceDateChanged", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceValueChanged_fc2ef790ea55778e] = env->getMethodID(cls, "referenceValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_scaleChanged_fc2ef790ea55778e] = env->getMethodID(cls, "scaleChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_selectionChanged_c5eea8698b6de721] = env->getMethodID(cls, "selectionChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_valueChanged_add632ecd3f14e19] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_8e4add4a2fbb55d9] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ParameterObserver::estimationTypeChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_estimationTypeChanged_c5eea8698b6de721], a0, a1.this$);
      }

      void ParameterObserver::maxValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_maxValueChanged_fc2ef790ea55778e], a0, a1.this$);
      }

      void ParameterObserver::minValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_minValueChanged_fc2ef790ea55778e], a0, a1.this$);
      }

      void ParameterObserver::nameChanged(const ::java::lang::String & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_nameChanged_e4f8d49c7ba0a1ff], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceDateChanged(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceDateChanged_a6424e7ebf34e1db], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceValueChanged_fc2ef790ea55778e], a0, a1.this$);
      }

      void ParameterObserver::scaleChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaleChanged_fc2ef790ea55778e], a0, a1.this$);
      }

      void ParameterObserver::selectionChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_selectionChanged_c5eea8698b6de721], a0, a1.this$);
      }

      void ParameterObserver::valueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_valueChanged_add632ecd3f14e19], a0, a1.this$, a2.this$);
      }

      void ParameterObserver::valueSpanMapChanged(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_valueSpanMapChanged_8e4add4a2fbb55d9], a0.this$, a1.this$);
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
      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args);

      static PyMethodDef t_ParameterObserver__methods_[] = {
        DECLARE_METHOD(t_ParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, estimationTypeChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, maxValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, minValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, nameChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceDateChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, scaleChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, selectionChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueSpanMapChanged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterObserver)[] = {
        { Py_tp_methods, t_ParameterObserver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterObserver, t_ParameterObserver, ParameterObserver);

      void t_ParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterObserver), &PY_TYPE_DEF(ParameterObserver), module, "ParameterObserver", 0);
      }

      void t_ParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "class_", make_descriptor(ParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "wrapfn_", make_descriptor(t_ParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterObserver::initializeClass, 1)))
          return NULL;
        return t_ParameterObserver::wrap_Object(ParameterObserver(((t_ParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.estimationTypeChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "estimationTypeChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.maxValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "maxValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.minValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "minValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.nameChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "nameChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceDateChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceDateChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaleChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaleChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.selectionChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "selectionChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.valueChanged(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1))
        {
          OBJ_CALL(self->object.valueSpanMapChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueSpanMapChanged", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonAbstractMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonAbstractMeasurement::class$ = NULL;
        jmethodID *PythonAbstractMeasurement::mids$ = NULL;
        bool PythonAbstractMeasurement::live$ = false;

        jclass PythonAbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonAbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5b84e6fdb291989] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLjava/util/List;)V");
            mids$[mid_addParameterDriver_01a5c4b8230d6f04] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractMeasurement::PythonAbstractMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_e5b84e6fdb291989, a0.this$, a1, a2, a3, a4.this$)) {}

        void PythonAbstractMeasurement::addParameterDriver(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addParameterDriver_01a5c4b8230d6f04], a0.this$);
        }

        void PythonAbstractMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractMeasurement::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args);
        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self);
        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args);
        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data);
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data);
        static PyGetSetDef t_PythonAbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, self),
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, addParameterDriver, METH_O),
          DECLARE_METHOD(t_PythonAbstractMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurement)[] = {
          { Py_tp_methods, t_PythonAbstractMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractMeasurement_init_ },
          { Py_tp_getset, t_PythonAbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonAbstractMeasurement, t_PythonAbstractMeasurement, PythonAbstractMeasurement);
        PyObject *t_PythonAbstractMeasurement::wrap_Object(const PythonAbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractMeasurement), &PY_TYPE_DEF(PythonAbstractMeasurement), module, "PythonAbstractMeasurement", 1);
        }

        void t_PythonAbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "class_", make_descriptor(PythonAbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "wrapfn_", make_descriptor(t_PythonAbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractMeasurement::wrap_Object(PythonAbstractMeasurement(((t_PythonAbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          PythonAbstractMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractMeasurement(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addParameterDriver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addParameterDriver", arg);
          return NULL;
        }

        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data)
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
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeComponents::class$ = NULL;
      jmethodID *TimeComponents::mids$ = NULL;
      bool TimeComponents::live$ = false;
      TimeComponents *TimeComponents::H00 = NULL;
      TimeComponents *TimeComponents::H12 = NULL;

      jclass TimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_1506189166690b5e] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_a74f71674060ec14] = env->getMethodID(cls, "<init>", "(IIDI)V");
          mids$[mid_compareTo_d9b2403c89c27b85] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/TimeComponents;)I");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_formatUtcOffset_11b109bd155ca898] = env->getMethodID(cls, "formatUtcOffset", "()Ljava/lang/String;");
          mids$[mid_fromSeconds_563e129122230559] = env->getStaticMethodID(cls, "fromSeconds", "(IDDI)Lorg/orekit/time/TimeComponents;");
          mids$[mid_getHour_570ce0828f81a2c1] = env->getMethodID(cls, "getHour", "()I");
          mids$[mid_getMinute_570ce0828f81a2c1] = env->getMethodID(cls, "getMinute", "()I");
          mids$[mid_getMinutesFromUTC_570ce0828f81a2c1] = env->getMethodID(cls, "getMinutesFromUTC", "()I");
          mids$[mid_getSecond_dff5885c2c873297] = env->getMethodID(cls, "getSecond", "()D");
          mids$[mid_getSecondsInLocalDay_dff5885c2c873297] = env->getMethodID(cls, "getSecondsInLocalDay", "()D");
          mids$[mid_getSecondsInUTCDay_dff5885c2c873297] = env->getMethodID(cls, "getSecondsInUTCDay", "()D");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseTime_38ec340cca6fd3db] = env->getStaticMethodID(cls, "parseTime", "(Ljava/lang/String;)Lorg/orekit/time/TimeComponents;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_11b109bd155ca898] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          H00 = new TimeComponents(env->getStaticObjectField(cls, "H00", "Lorg/orekit/time/TimeComponents;"));
          H12 = new TimeComponents(env->getStaticObjectField(cls, "H12", "Lorg/orekit/time/TimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeComponents::TimeComponents(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      TimeComponents::TimeComponents(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1506189166690b5e, a0, a1, a2)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a74f71674060ec14, a0, a1, a2, a3)) {}

      jint TimeComponents::compareTo(const TimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_d9b2403c89c27b85], a0.this$);
      }

      jboolean TimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      ::java::lang::String TimeComponents::formatUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_formatUtcOffset_11b109bd155ca898]));
      }

      TimeComponents TimeComponents::fromSeconds(jint a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_fromSeconds_563e129122230559], a0, a1, a2, a3));
      }

      jint TimeComponents::getHour() const
      {
        return env->callIntMethod(this$, mids$[mid_getHour_570ce0828f81a2c1]);
      }

      jint TimeComponents::getMinute() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinute_570ce0828f81a2c1]);
      }

      jint TimeComponents::getMinutesFromUTC() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinutesFromUTC_570ce0828f81a2c1]);
      }

      jdouble TimeComponents::getSecond() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecond_dff5885c2c873297]);
      }

      jdouble TimeComponents::getSecondsInLocalDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInLocalDay_dff5885c2c873297]);
      }

      jdouble TimeComponents::getSecondsInUTCDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInUTCDay_dff5885c2c873297]);
      }

      jint TimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      TimeComponents TimeComponents::parseTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseTime_38ec340cca6fd3db], a0.this$));
      }

      ::java::lang::String TimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::java::lang::String TimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_11b109bd155ca898]));
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
      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg);
      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data);
      static PyGetSetDef t_TimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_TimeComponents, hour),
        DECLARE_GET_FIELD(t_TimeComponents, minute),
        DECLARE_GET_FIELD(t_TimeComponents, minutesFromUTC),
        DECLARE_GET_FIELD(t_TimeComponents, second),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInLocalDay),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInUTCDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeComponents__methods_[] = {
        DECLARE_METHOD(t_TimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_TimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, formatUtcOffset, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, fromSeconds, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, getHour, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinute, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinutesFromUTC, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInLocalDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInUTCDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, parseTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, toStringWithoutUtcOffset, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeComponents)[] = {
        { Py_tp_methods, t_TimeComponents__methods_ },
        { Py_tp_init, (void *) t_TimeComponents_init_ },
        { Py_tp_getset, t_TimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeComponents, t_TimeComponents, TimeComponents);

      void t_TimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeComponents), &PY_TYPE_DEF(TimeComponents), module, "TimeComponents", 0);
      }

      void t_TimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "class_", make_descriptor(TimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "wrapfn_", make_descriptor(t_TimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H00", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H00)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H12", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H12)));
      }

      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeComponents::initializeClass, 1)))
          return NULL;
        return t_TimeComponents::wrap_Object(TimeComponents(((t_TimeComponents *) arg)->object.this$));
      }
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = TimeComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jint a3;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIDI", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2, a3));
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

      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg)
      {
        TimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", TimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.formatUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        TimeComponents result((jobject) NULL);

        if (!parseArgs(args, "IDDI", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::fromSeconds(a0, a1, a2, a3));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fromSeconds", args);
        return NULL;
      }

      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getHour());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinute());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecond());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::parseTime(a0));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTime", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getHour());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinute());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecond());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$SessionStatistics::class$ = NULL;
        jmethodID *CRD$SessionStatistics::mids$ = NULL;
        bool CRD$SessionStatistics::live$ = false;

        jclass CRD$SessionStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$SessionStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_db837d160336a437] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDDI)V");
            mids$[mid_getDataQulityIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getDataQulityIndicator", "()I");
            mids$[mid_getKurtosis_dff5885c2c873297] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getPeakMinusMean_dff5885c2c873297] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getRms_dff5885c2c873297] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getSkewness_dff5885c2c873297] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSystemConfigurationId_11b109bd155ca898] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$SessionStatistics::CRD$SessionStatistics(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db837d160336a437, a0.this$, a1, a2, a3, a4, a5)) {}

        jint CRD$SessionStatistics::getDataQulityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataQulityIndicator_570ce0828f81a2c1]);
        }

        jdouble CRD$SessionStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_dff5885c2c873297]);
        }

        jdouble CRD$SessionStatistics::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_dff5885c2c873297]);
        }

        jdouble CRD$SessionStatistics::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_dff5885c2c873297]);
        }

        jdouble CRD$SessionStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_dff5885c2c873297]);
        }

        ::java::lang::String CRD$SessionStatistics::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_11b109bd155ca898]));
        }

        ::java::lang::String CRD$SessionStatistics::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRD$SessionStatistics::toString() const
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
        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args);
        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data);
        static PyGetSetDef t_CRD$SessionStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, dataQulityIndicator),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, kurtosis),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, rms),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, skewness),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, systemConfigurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$SessionStatistics__methods_[] = {
          DECLARE_METHOD(t_CRD$SessionStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getDataQulityIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$SessionStatistics)[] = {
          { Py_tp_methods, t_CRD$SessionStatistics__methods_ },
          { Py_tp_init, (void *) t_CRD$SessionStatistics_init_ },
          { Py_tp_getset, t_CRD$SessionStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$SessionStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$SessionStatistics, t_CRD$SessionStatistics, CRD$SessionStatistics);

        void t_CRD$SessionStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$SessionStatistics), &PY_TYPE_DEF(CRD$SessionStatistics), module, "CRD$SessionStatistics", 0);
        }

        void t_CRD$SessionStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "class_", make_descriptor(CRD$SessionStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "wrapfn_", make_descriptor(t_CRD$SessionStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$SessionStatistics::initializeClass, 1)))
            return NULL;
          return t_CRD$SessionStatistics::wrap_Object(CRD$SessionStatistics(((t_CRD$SessionStatistics *) arg)->object.this$));
        }
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$SessionStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jint a5;
          CRD$SessionStatistics object((jobject) NULL);

          if (!parseArgs(args, "sDDDDI", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = CRD$SessionStatistics(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$SessionStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEclipseDetector::class$ = NULL;
        jmethodID *FieldEclipseDetector::mids$ = NULL;
        bool FieldEclipseDetector::live$ = false;

        jclass FieldEclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4d5ea8a562078a81] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_1bf89e9c93e81794] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMargin_eba8e72a22c984ac] = env->getMethodID(cls, "getMargin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOccultationEngine_a79c04d8e5243995] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_b108b35ef48e27bd] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_dc9df869634ffc65] = env->getMethodID(cls, "withMargin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withPenumbra_4914423b50a4170c] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withUmbra_4914423b50a4170c] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_create_13c93b03c50400ac] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::OccultationEngine & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_4d5ea8a562078a81, a0.this$, a1.this$)) {}

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1bf89e9c93e81794, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::getMargin() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMargin_eba8e72a22c984ac]));
        }

        ::org::orekit::utils::OccultationEngine FieldEclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_a79c04d8e5243995]));
        }

        jboolean FieldEclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_b108b35ef48e27bd]);
        }

        FieldEclipseDetector FieldEclipseDetector::withMargin(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_dc9df869634ffc65], a0.this$));
        }

        FieldEclipseDetector FieldEclipseDetector::withPenumbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_4914423b50a4170c]));
        }

        FieldEclipseDetector FieldEclipseDetector::withUmbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_4914423b50a4170c]));
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
      namespace events {
        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args);
        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args);
        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data);
        static PyGetSetDef t_FieldEclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEclipseDetector, margin),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEclipseDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_FieldEclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEclipseDetector)[] = {
          { Py_tp_methods, t_FieldEclipseDetector__methods_ },
          { Py_tp_init, (void *) t_FieldEclipseDetector_init_ },
          { Py_tp_getset, t_FieldEclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEclipseDetector, t_FieldEclipseDetector, FieldEclipseDetector);
        PyObject *t_FieldEclipseDetector::wrap_Object(const FieldEclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEclipseDetector), &PY_TYPE_DEF(FieldEclipseDetector), module, "FieldEclipseDetector", 0);
        }

        void t_FieldEclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "class_", make_descriptor(FieldEclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "wrapfn_", make_descriptor(t_FieldEclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEclipseDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEclipseDetector::wrap_Object(FieldEclipseDetector(((t_FieldEclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::OccultationEngine a1((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::OccultationEngine::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "KkDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMargin());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMargin());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Quaternion::class$ = NULL;
      jmethodID *Quaternion::mids$ = NULL;
      bool Quaternion::live$ = false;
      Quaternion *Quaternion::I = NULL;
      Quaternion *Quaternion::IDENTITY = NULL;
      Quaternion *Quaternion::J = NULL;
      Quaternion *Quaternion::K = NULL;
      Quaternion *Quaternion::ZERO = NULL;

      jclass Quaternion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Quaternion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_f617b8481082c6ea] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
          mids$[mid_add_5f613698e2914831] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_add_96add5f368389e9a] = env->getStaticMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_dotProduct_d593b23f46fb0b5a] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_dotProduct_824df456e9101c13] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_aada2c4d1efd962c] = env->getMethodID(cls, "equals", "(Lorg/hipparchus/complex/Quaternion;D)Z");
          mids$[mid_getConjugate_18aa64800eb51ca4] = env->getMethodID(cls, "getConjugate", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getInverse_18aa64800eb51ca4] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getNorm_dff5885c2c873297] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getPositivePolarForm_18aa64800eb51ca4] = env->getMethodID(cls, "getPositivePolarForm", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getQ0_dff5885c2c873297] = env->getMethodID(cls, "getQ0", "()D");
          mids$[mid_getQ1_dff5885c2c873297] = env->getMethodID(cls, "getQ1", "()D");
          mids$[mid_getQ2_dff5885c2c873297] = env->getMethodID(cls, "getQ2", "()D");
          mids$[mid_getQ3_dff5885c2c873297] = env->getMethodID(cls, "getQ3", "()D");
          mids$[mid_getScalarPart_dff5885c2c873297] = env->getMethodID(cls, "getScalarPart", "()D");
          mids$[mid_getVectorPart_60c7040667a7dc5c] = env->getMethodID(cls, "getVectorPart", "()[D");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isPureQuaternion_2e401133981893e4] = env->getMethodID(cls, "isPureQuaternion", "(D)Z");
          mids$[mid_isUnitQuaternion_2e401133981893e4] = env->getMethodID(cls, "isUnitQuaternion", "(D)Z");
          mids$[mid_multiply_5f613698e2914831] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_40fb43ad9b6aa555] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_96add5f368389e9a] = env->getStaticMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_normalize_18aa64800eb51ca4] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_5f613698e2914831] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_96add5f368389e9a] = env->getStaticMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Quaternion(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Quaternion;"));
          IDENTITY = new Quaternion(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/complex/Quaternion;"));
          J = new Quaternion(env->getStaticObjectField(cls, "J", "Lorg/hipparchus/complex/Quaternion;"));
          K = new Quaternion(env->getStaticObjectField(cls, "K", "Lorg/hipparchus/complex/Quaternion;"));
          ZERO = new Quaternion(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Quaternion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Quaternion::Quaternion(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      Quaternion::Quaternion(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f617b8481082c6ea, a0, a1.this$)) {}

      Quaternion::Quaternion(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

      Quaternion Quaternion::add(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_add_5f613698e2914831], a0.this$));
      }

      Quaternion Quaternion::add(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_add_96add5f368389e9a], a0.this$, a1.this$));
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_d593b23f46fb0b5a], a0.this$);
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_824df456e9101c13], a0.this$, a1.this$);
      }

      jboolean Quaternion::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jboolean Quaternion::equals(const Quaternion & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_aada2c4d1efd962c], a0.this$, a1);
      }

      Quaternion Quaternion::getConjugate() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getConjugate_18aa64800eb51ca4]));
      }

      Quaternion Quaternion::getInverse() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getInverse_18aa64800eb51ca4]));
      }

      jdouble Quaternion::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_dff5885c2c873297]);
      }

      Quaternion Quaternion::getPositivePolarForm() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getPositivePolarForm_18aa64800eb51ca4]));
      }

      jdouble Quaternion::getQ0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ0_dff5885c2c873297]);
      }

      jdouble Quaternion::getQ1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ1_dff5885c2c873297]);
      }

      jdouble Quaternion::getQ2() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ2_dff5885c2c873297]);
      }

      jdouble Quaternion::getQ3() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ3_dff5885c2c873297]);
      }

      jdouble Quaternion::getScalarPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScalarPart_dff5885c2c873297]);
      }

      JArray< jdouble > Quaternion::getVectorPart() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVectorPart_60c7040667a7dc5c]));
      }

      jint Quaternion::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jboolean Quaternion::isPureQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPureQuaternion_2e401133981893e4], a0);
      }

      jboolean Quaternion::isUnitQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isUnitQuaternion_2e401133981893e4], a0);
      }

      Quaternion Quaternion::multiply(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_5f613698e2914831], a0.this$));
      }

      Quaternion Quaternion::multiply(jdouble a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_40fb43ad9b6aa555], a0));
      }

      Quaternion Quaternion::multiply(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_multiply_96add5f368389e9a], a0.this$, a1.this$));
      }

      Quaternion Quaternion::normalize() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_normalize_18aa64800eb51ca4]));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_subtract_5f613698e2914831], a0.this$));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_subtract_96add5f368389e9a], a0.this$, a1.this$));
      }

      ::java::lang::String Quaternion::toString() const
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
  namespace hipparchus {
    namespace complex {
      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self);
      static PyObject *t_Quaternion_getInverse(t_Quaternion *self);
      static PyObject *t_Quaternion_getNorm(t_Quaternion *self);
      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ0(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ1(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ2(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ3(t_Quaternion *self);
      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self);
      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self);
      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_normalize(t_Quaternion *self);
      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data);
      static PyGetSetDef t_Quaternion__fields_[] = {
        DECLARE_GET_FIELD(t_Quaternion, conjugate),
        DECLARE_GET_FIELD(t_Quaternion, inverse),
        DECLARE_GET_FIELD(t_Quaternion, norm),
        DECLARE_GET_FIELD(t_Quaternion, positivePolarForm),
        DECLARE_GET_FIELD(t_Quaternion, q0),
        DECLARE_GET_FIELD(t_Quaternion, q1),
        DECLARE_GET_FIELD(t_Quaternion, q2),
        DECLARE_GET_FIELD(t_Quaternion, q3),
        DECLARE_GET_FIELD(t_Quaternion, scalarPart),
        DECLARE_GET_FIELD(t_Quaternion, vectorPart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Quaternion__methods_[] = {
        DECLARE_METHOD(t_Quaternion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, add, METH_O),
        DECLARE_METHOD(t_Quaternion, add_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, dotProduct, METH_O),
        DECLARE_METHOD(t_Quaternion, dotProduct_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, equals, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, getConjugate, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getPositivePolarForm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ0, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ1, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ2, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ3, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getScalarPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getVectorPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, isPureQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, isUnitQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, multiply_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, subtract, METH_O),
        DECLARE_METHOD(t_Quaternion, subtract_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Quaternion)[] = {
        { Py_tp_methods, t_Quaternion__methods_ },
        { Py_tp_init, (void *) t_Quaternion_init_ },
        { Py_tp_getset, t_Quaternion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Quaternion)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Quaternion, t_Quaternion, Quaternion);

      void t_Quaternion::install(PyObject *module)
      {
        installType(&PY_TYPE(Quaternion), &PY_TYPE_DEF(Quaternion), module, "Quaternion", 0);
      }

      void t_Quaternion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "class_", make_descriptor(Quaternion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "wrapfn_", make_descriptor(t_Quaternion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "boxfn_", make_descriptor(boxObject));
        env->getClass(Quaternion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "I", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "IDENTITY", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::IDENTITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "J", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::J)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "K", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "ZERO", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::ZERO)));
      }

      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Quaternion::initializeClass, 1)))
          return NULL;
        return t_Quaternion::wrap_Object(Quaternion(((t_Quaternion *) arg)->object.this$));
      }
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Quaternion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Quaternion(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = Quaternion(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Quaternion(a0, a1, a2, a3));
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

      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::add(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "add_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::dotProduct(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "dotProduct_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 2:
          {
            Quaternion a0((jobject) NULL);
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "kD", Quaternion::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getConjugate());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getInverse(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getNorm(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getQ0(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ1(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ2(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ2());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ3(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ3());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScalarPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVectorPart());
        return result.wrap();
      }

      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isPureQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isPureQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isUnitQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isUnitQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Quaternion a0((jobject) NULL);
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "k", Quaternion::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::multiply(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "multiply_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_normalize(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::subtract(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "subtract_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getConjugate());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ2());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ3());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScalarPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVectorPart());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/KeplerianPropagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *KeplerianPropagator::class$ = NULL;
        jmethodID *KeplerianPropagator::mids$ = NULL;
        bool KeplerianPropagator::live$ = false;

        jclass KeplerianPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/KeplerianPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6219f6b430651d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_6a752d664cb18d86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
            mids$[mid_init$_6d1157b698d5d0d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_664d66016fd6d2d1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_14feca30358aa4fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DD)V");
            mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_createHarvester_5cfd2a13971b74c7] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6219f6b430651d68, a0.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6a752d664cb18d86, a0.this$, a1)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6d1157b698d5d0d2, a0.this$, a1.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_664d66016fd6d2d1, a0.this$, a1.this$, a2)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_14feca30358aa4fd, a0.this$, a1.this$, a2, a3)) {}

        void KeplerianPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
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
      namespace analytical {
        static PyObject *t_KeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagator_init_(t_KeplerianPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagator_resetInitialState(t_KeplerianPropagator *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagator__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagator)[] = {
          { Py_tp_methods, t_KeplerianPropagator__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagator, t_KeplerianPropagator, KeplerianPropagator);

        void t_KeplerianPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagator), &PY_TYPE_DEF(KeplerianPropagator), module, "KeplerianPropagator", 0);
        }

        void t_KeplerianPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "class_", make_descriptor(KeplerianPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "wrapfn_", make_descriptor(t_KeplerianPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagator::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagator::wrap_Object(KeplerianPropagator(((t_KeplerianPropagator *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagator_init_(t_KeplerianPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = KeplerianPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1, a2, a3));
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

        static PyObject *t_KeplerianPropagator_resetInitialState(t_KeplerianPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(KeplerianPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ShadowModel::class$ = NULL;
              jmethodID *ShadowModel::mids$ = NULL;
              bool ShadowModel::live$ = false;
              ShadowModel *ShadowModel::CONE = NULL;
              ShadowModel *ShadowModel::CYLINDRICAL = NULL;
              ShadowModel *ShadowModel::DUAL_CONE = NULL;
              ShadowModel *ShadowModel::NONE = NULL;

              jclass ShadowModel::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_446bea8e05a9174e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_values_3ee1827a2f49d088] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CONE = new ShadowModel(env->getStaticObjectField(cls, "CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  CYLINDRICAL = new ShadowModel(env->getStaticObjectField(cls, "CYLINDRICAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  DUAL_CONE = new ShadowModel(env->getStaticObjectField(cls, "DUAL_CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  NONE = new ShadowModel(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShadowModel ShadowModel::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShadowModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_446bea8e05a9174e], a0.this$));
              }

              JArray< ShadowModel > ShadowModel::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShadowModel >(env->callStaticObjectMethod(cls, mids$[mid_values_3ee1827a2f49d088]));
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
            namespace ocm {
              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args);
              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShadowModel_values(PyTypeObject *type);
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data);
              static PyGetSetDef t_ShadowModel__fields_[] = {
                DECLARE_GET_FIELD(t_ShadowModel, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShadowModel__methods_[] = {
                DECLARE_METHOD(t_ShadowModel, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShadowModel, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShadowModel)[] = {
                { Py_tp_methods, t_ShadowModel__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShadowModel__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShadowModel)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShadowModel, t_ShadowModel, ShadowModel);
              PyObject *t_ShadowModel::wrap_Object(const ShadowModel& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShadowModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShadowModel::install(PyObject *module)
              {
                installType(&PY_TYPE(ShadowModel), &PY_TYPE_DEF(ShadowModel), module, "ShadowModel", 0);
              }

              void t_ShadowModel::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "class_", make_descriptor(ShadowModel::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "wrapfn_", make_descriptor(t_ShadowModel::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShadowModel::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CYLINDRICAL", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CYLINDRICAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "DUAL_CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::DUAL_CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "NONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::NONE)));
              }

              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShadowModel::initializeClass, 1)))
                  return NULL;
                return t_ShadowModel::wrap_Object(ShadowModel(((t_ShadowModel *) arg)->object.this$));
              }
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShadowModel::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShadowModel result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::valueOf(a0));
                  return t_ShadowModel::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShadowModel_values(PyTypeObject *type)
              {
                JArray< ShadowModel > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::values());
                return JArray<jobject>(result.this$).wrap(t_ShadowModel::wrap_jobject);
              }
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *BistaticRangeRateBuilder::class$ = NULL;
          jmethodID *BistaticRangeRateBuilder::mids$ = NULL;
          bool BistaticRangeRateBuilder::live$ = false;

          jclass BistaticRangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f2d2df585c0173ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_1528d79473e922b0] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateBuilder::BistaticRangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2d2df585c0173ae, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRangeRate BistaticRangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRangeRate(env->callObjectMethod(this$, mids$[mid_build_1528d79473e922b0], a0.this$, a1.this$));
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args);
          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args);
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data);
          static PyGetSetDef t_BistaticRangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_BistaticRangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BistaticRangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateBuilder)[] = {
            { Py_tp_methods, t_BistaticRangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateBuilder_init_ },
            { Py_tp_getset, t_BistaticRangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateBuilder, t_BistaticRangeRateBuilder, BistaticRangeRateBuilder);
          PyObject *t_BistaticRangeRateBuilder::wrap_Object(const BistaticRangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_BistaticRangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_BistaticRangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateBuilder), &PY_TYPE_DEF(BistaticRangeRateBuilder), module, "BistaticRangeRateBuilder", 0);
          }

          void t_BistaticRangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "class_", make_descriptor(BistaticRangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "wrapfn_", make_descriptor(t_BistaticRangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateBuilder::wrap_Object(BistaticRangeRateBuilder(((t_BistaticRangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            BistaticRangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = BistaticRangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::BistaticRangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_BistaticRangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(BistaticRangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
