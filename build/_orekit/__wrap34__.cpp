#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TimeSpanEstimatedTroposphericModel::class$ = NULL;
          jmethodID *TimeSpanEstimatedTroposphericModel::mids$ = NULL;
          bool TimeSpanEstimatedTroposphericModel::live$ = false;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_AFTER = NULL;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_BEFORE = NULL;

          jclass TimeSpanEstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_51e24b7792379eec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;)V");
              mids$[mid_init$_0117665e923ce303] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addTroposphericModelValidAfter_a5a1634f5bfcf1ab] = env->getMethodID(cls, "addTroposphericModelValidAfter", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addTroposphericModelValidBefore_a5a1634f5bfcf1ab] = env->getMethodID(cls, "addTroposphericModelValidBefore", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_extractParameters_020d17bb8c285475] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_extractParameters_547c908eaeea187e] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFirstSpan_971209c2bf2033e7] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTroposphericModel_2e0f060ffdeb7f2a] = env->getMethodID(cls, "getTroposphericModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
              DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_51e24b7792379eec, a0.this$)) {}

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0117665e923ce303, a0.this$, a1.this$)) {}

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidAfter(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidAfter_a5a1634f5bfcf1ab], a0.this$, a1.this$);
          }

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidBefore(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidBefore_a5a1634f5bfcf1ab], a0.this$, a1.this$);
          }

          JArray< jdouble > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_020d17bb8c285475], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_547c908eaeea187e], a0.this$, a1.this$));
          }

          ::org::orekit::utils::TimeSpanMap$Span TimeSpanEstimatedTroposphericModel::getFirstSpan() const
          {
            return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_971209c2bf2033e7]));
          }

          ::java::util::List TimeSpanEstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel TimeSpanEstimatedTroposphericModel::getTroposphericModel(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel(env->callObjectMethod(this$, mids$[mid_getTroposphericModel_2e0f060ffdeb7f2a], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement TimeSpanEstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble TimeSpanEstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
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
          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_TimeSpanEstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, firstSpan),
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSpanEstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidAfter, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidBefore, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, extractParameters, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getFirstSpan, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getTroposphericModel, METH_O),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSpanEstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_TimeSpanEstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_TimeSpanEstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_TimeSpanEstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSpanEstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSpanEstimatedTroposphericModel, t_TimeSpanEstimatedTroposphericModel, TimeSpanEstimatedTroposphericModel);

          void t_TimeSpanEstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSpanEstimatedTroposphericModel), &PY_TYPE_DEF(TimeSpanEstimatedTroposphericModel), module, "TimeSpanEstimatedTroposphericModel", 0);
          }

          void t_TimeSpanEstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "class_", make_descriptor(TimeSpanEstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "wrapfn_", make_descriptor(t_TimeSpanEstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSpanEstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_AFTER", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_AFTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_BEFORE)));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_TimeSpanEstimatedTroposphericModel::wrap_Object(TimeSpanEstimatedTroposphericModel(((t_TimeSpanEstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, &a0))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0, a1));
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidAfter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidAfter", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidBefore(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidBefore", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.extractParameters(a0, a1));
                  return result.wrap();
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.extractParameters(a0, a1));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::models::earth::troposphere::PY_TYPE(EstimatedTroposphericModel));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTroposphericModel(a0));
              return ::org::orekit::models::earth::troposphere::t_EstimatedTroposphericModel::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTroposphericModel", arg);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Throwable.h"
#include "java/lang/Throwable.h"
#include "java/io/Serializable.h"
#include "java/io/PrintWriter.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Throwable::class$ = NULL;
    jmethodID *Throwable::mids$ = NULL;
    bool Throwable::live$ = false;

    jclass Throwable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Throwable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_addSuppressed_98504698e8b85a67] = env->getMethodID(cls, "addSuppressed", "(Ljava/lang/Throwable;)V");
        mids$[mid_fillInStackTrace_281710d8d48eb133] = env->getMethodID(cls, "fillInStackTrace", "()Ljava/lang/Throwable;");
        mids$[mid_getCause_281710d8d48eb133] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
        mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
        mids$[mid_getStackTrace_3450848eb58bb499] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getSuppressed_324bf2ef70f5279e] = env->getMethodID(cls, "getSuppressed", "()[Ljava/lang/Throwable;");
        mids$[mid_initCause_1225dc7d8a39887f] = env->getMethodID(cls, "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;");
        mids$[mid_printStackTrace_0fa09c18fee449d5] = env->getMethodID(cls, "printStackTrace", "()V");
        mids$[mid_printStackTrace_d7059445128d3e18] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintStream;)V");
        mids$[mid_printStackTrace_4999b5b1f2d8269b] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintWriter;)V");
        mids$[mid_setStackTrace_08da82c7aad10ed0] = env->getMethodID(cls, "setStackTrace", "([Ljava/lang/StackTraceElement;)V");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Throwable::Throwable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    Throwable::Throwable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Throwable::Throwable(const ::java::lang::String & a0, const Throwable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}

    void Throwable::addSuppressed(const Throwable & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addSuppressed_98504698e8b85a67], a0.this$);
    }

    Throwable Throwable::fillInStackTrace() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_fillInStackTrace_281710d8d48eb133]));
    }

    Throwable Throwable::getCause() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_getCause_281710d8d48eb133]));
    }

    ::java::lang::String Throwable::getLocalizedMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
    }

    ::java::lang::String Throwable::getMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
    }

    JArray< ::java::lang::StackTraceElement > Throwable::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_3450848eb58bb499]));
    }

    JArray< Throwable > Throwable::getSuppressed() const
    {
      return JArray< Throwable >(env->callObjectMethod(this$, mids$[mid_getSuppressed_324bf2ef70f5279e]));
    }

    Throwable Throwable::initCause(const Throwable & a0) const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_initCause_1225dc7d8a39887f], a0.this$));
    }

    void Throwable::printStackTrace() const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_0fa09c18fee449d5]);
    }

    void Throwable::printStackTrace(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_d7059445128d3e18], a0.this$);
    }

    void Throwable::printStackTrace(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_4999b5b1f2d8269b], a0.this$);
    }

    void Throwable::setStackTrace(const JArray< ::java::lang::StackTraceElement > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setStackTrace_08da82c7aad10ed0], a0.this$);
    }

    ::java::lang::String Throwable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getCause(t_Throwable *self);
    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self);
    static PyObject *t_Throwable_getMessage(t_Throwable *self);
    static PyObject *t_Throwable_getStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getSuppressed(t_Throwable *self);
    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data);
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data);
    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data);
    static PyGetSetDef t_Throwable__fields_[] = {
      DECLARE_GET_FIELD(t_Throwable, cause),
      DECLARE_GET_FIELD(t_Throwable, localizedMessage),
      DECLARE_GET_FIELD(t_Throwable, message),
      DECLARE_GETSET_FIELD(t_Throwable, stackTrace),
      DECLARE_GET_FIELD(t_Throwable, suppressed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Throwable__methods_[] = {
      DECLARE_METHOD(t_Throwable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, addSuppressed, METH_O),
      DECLARE_METHOD(t_Throwable, fillInStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getCause, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getLocalizedMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getSuppressed, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, initCause, METH_O),
      DECLARE_METHOD(t_Throwable, printStackTrace, METH_VARARGS),
      DECLARE_METHOD(t_Throwable, setStackTrace, METH_O),
      DECLARE_METHOD(t_Throwable, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Throwable)[] = {
      { Py_tp_methods, t_Throwable__methods_ },
      { Py_tp_init, (void *) t_Throwable_init_ },
      { Py_tp_getset, t_Throwable__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Throwable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Throwable, t_Throwable, Throwable);

    void t_Throwable::install(PyObject *module)
    {
      installType(&PY_TYPE(Throwable), &PY_TYPE_DEF(Throwable), module, "Throwable", 0);
    }

    void t_Throwable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "class_", make_descriptor(Throwable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "wrapfn_", make_descriptor(t_Throwable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Throwable::initializeClass, 1)))
        return NULL;
      return t_Throwable::wrap_Object(Throwable(((t_Throwable *) arg)->object.this$));
    }
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Throwable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Throwable object((jobject) NULL);

          INT_CALL(object = Throwable());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Throwable(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable a1((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "sk", Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Throwable(a0, a1));
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

    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(self->object.addSuppressed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addSuppressed", arg);
      return NULL;
    }

    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.fillInStackTrace());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getCause(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getCause());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocalizedMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getStackTrace(t_Throwable *self)
    {
      JArray< ::java::lang::StackTraceElement > result((jobject) NULL);
      OBJ_CALL(result = self->object.getStackTrace());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Throwable_getSuppressed(t_Throwable *self)
    {
      JArray< Throwable > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuppressed());
      return JArray<jobject>(result.this$).wrap(t_Throwable::wrap_jobject);
    }

    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);
      Throwable result((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.initCause(a0));
        return t_Throwable::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "initCause", arg);
      return NULL;
    }

    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.printStackTrace());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printStackTrace", args);
      return NULL;
    }

    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg)
    {
      JArray< ::java::lang::StackTraceElement > a0((jobject) NULL);

      if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setStackTrace(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setStackTrace", arg);
      return NULL;
    }

    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Throwable), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data)
    {
      Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return t_Throwable::wrap_Object(value);
    }

    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocalizedMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data)
    {
      JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
      OBJ_CALL(value = self->object.getStackTrace());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data)
    {
      {
        JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
        if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &value))
        {
          INT_CALL(self->object.setStackTrace(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "stackTrace", arg);
      return -1;
    }

    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data)
    {
      JArray< Throwable > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuppressed());
      return JArray<jobject>(value.this$).wrap(t_Throwable::wrap_jobject);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionHeader::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionHeader::mids$ = NULL;
              bool RtcmOrbitCorrectionHeader::live$ = false;

              jclass RtcmOrbitCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteReferenceDatum_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteReferenceDatum", "()I");
                  mids$[mid_setSatelliteReferenceDatum_99803b0791f320ff] = env->getMethodID(cls, "setSatelliteReferenceDatum", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionHeader::RtcmOrbitCorrectionHeader() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint RtcmOrbitCorrectionHeader::getSatelliteReferenceDatum() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteReferenceDatum_570ce0828f81a2c1]);
              }

              void RtcmOrbitCorrectionHeader::setSatelliteReferenceDatum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteReferenceDatum_99803b0791f320ff], a0);
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
            namespace correction {
              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self);
              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data);
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionHeader, satelliteReferenceDatum),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, getSatelliteReferenceDatum, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, setSatelliteReferenceDatum, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionHeader, t_RtcmOrbitCorrectionHeader, RtcmOrbitCorrectionHeader);

              void t_RtcmOrbitCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionHeader), &PY_TYPE_DEF(RtcmOrbitCorrectionHeader), module, "RtcmOrbitCorrectionHeader", 0);
              }

              void t_RtcmOrbitCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "class_", make_descriptor(RtcmOrbitCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionHeader::wrap_Object(RtcmOrbitCorrectionHeader(((t_RtcmOrbitCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteReferenceDatum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteReferenceDatum", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteReferenceDatum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteReferenceDatum", arg);
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
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStamped::class$ = NULL;
      jmethodID *FieldTimeStamped::mids$ = NULL;
      bool FieldTimeStamped::live$ = false;

      jclass FieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_5b3d47fc55f504bc] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldTimeStamped;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldTimeStamped::durationFrom(const FieldTimeStamped & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_5b3d47fc55f504bc], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStamped::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
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
      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args);
      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg);
      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self);
      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data);
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data);
      static PyGetSetDef t_FieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStamped, date),
        DECLARE_GET_FIELD(t_FieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_FieldTimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStamped)[] = {
        { Py_tp_methods, t_FieldTimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStamped, t_FieldTimeStamped, FieldTimeStamped);
      PyObject *t_FieldTimeStamped::wrap_Object(const FieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStamped), &PY_TYPE_DEF(FieldTimeStamped), module, "FieldTimeStamped", 0);
      }

      void t_FieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "class_", make_descriptor(FieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "wrapfn_", make_descriptor(t_FieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStamped::wrap_Object(FieldTimeStamped(((t_FieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg)
      {
        FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTimeStamped::initializeClass, &a0, &p0, t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationDataSet::class$ = NULL;
          jmethodID *ObservationDataSet::mids$ = NULL;
          bool ObservationDataSet::live$ = false;

          jclass ObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3617e5a957fde8c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/time/AbsoluteDate;IDLjava/util/List;)V");
              mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEventFlag_570ce0828f81a2c1] = env->getMethodID(cls, "getEventFlag", "()I");
              mids$[mid_getObservationData_2afa36052df4765d] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getRcvrClkOffset_dff5885c2c873297] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatellite_7c0ce8c834d2e72b] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationDataSet::ObservationDataSet(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3617e5a957fde8c1, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate ObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
          }

          jint ObservationDataSet::getEventFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getEventFlag_570ce0828f81a2c1]);
          }

          ::java::util::List ObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_2afa36052df4765d]));
          }

          jdouble ObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_dff5885c2c873297]);
          }

          ::org::orekit::gnss::SatInSystem ObservationDataSet::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_7c0ce8c834d2e72b]));
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
      namespace rinex {
        namespace observation {
          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data);
          static PyGetSetDef t_ObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationDataSet, date),
            DECLARE_GET_FIELD(t_ObservationDataSet, eventFlag),
            DECLARE_GET_FIELD(t_ObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_ObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_ObservationDataSet, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_ObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getEventFlag, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationDataSet)[] = {
            { Py_tp_methods, t_ObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_ObservationDataSet_init_ },
            { Py_tp_getset, t_ObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationDataSet, t_ObservationDataSet, ObservationDataSet);

          void t_ObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationDataSet), &PY_TYPE_DEF(ObservationDataSet), module, "ObservationDataSet", 0);
          }

          void t_ObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "class_", make_descriptor(ObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "wrapfn_", make_descriptor(t_ObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_ObservationDataSet::wrap_Object(ObservationDataSet(((t_ObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jint a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            ObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kkIDK", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEventFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEventFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersOffsetComputer::class$ = NULL;
          jmethodID *PhaseCentersOffsetComputer::mids$ = NULL;
          bool PhaseCentersOffsetComputer::live$ = false;

          jclass PhaseCentersOffsetComputer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a2ed374ecf8bf34a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_offset_02d94d8d3b578650] = env->getMethodID(cls, "offset", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersOffsetComputer::PhaseCentersOffsetComputer(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2ed374ecf8bf34a, a0.this$, a1.this$)) {}

          jdouble PhaseCentersOffsetComputer::offset(const ::org::orekit::frames::StaticTransform & a0, const ::org::orekit::frames::StaticTransform & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_02d94d8d3b578650], a0.this$, a1.this$);
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
          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args);

          static PyMethodDef t_PhaseCentersOffsetComputer__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, offset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersOffsetComputer)[] = {
            { Py_tp_methods, t_PhaseCentersOffsetComputer__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersOffsetComputer_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersOffsetComputer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersOffsetComputer, t_PhaseCentersOffsetComputer, PhaseCentersOffsetComputer);

          void t_PhaseCentersOffsetComputer::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersOffsetComputer), &PY_TYPE_DEF(PhaseCentersOffsetComputer), module, "PhaseCentersOffsetComputer", 0);
          }

          void t_PhaseCentersOffsetComputer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "class_", make_descriptor(PhaseCentersOffsetComputer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "wrapfn_", make_descriptor(t_PhaseCentersOffsetComputer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersOffsetComputer::wrap_Object(PhaseCentersOffsetComputer(((t_PhaseCentersOffsetComputer *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersOffsetComputer object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersOffsetComputer(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args)
          {
            ::org::orekit::frames::StaticTransform a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::frames::StaticTransform::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.offset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedEop::class$ = NULL;
      jmethodID *LazyLoadedEop::mids$ = NULL;
      bool LazyLoadedEop::live$ = false;

      jclass LazyLoadedEop::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedEop");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2ce23204880a56c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_ff1d8967dbd30cfb] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_ff1d8967dbd30cfb] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addEOPHistoryLoader_0f554c95baa6eac9] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_0fa09c18fee449d5] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getDataProvidersManager_69fa4d0abe16d651] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getEOPHistory_4f61b29504ebc31d] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/time/TimeScales;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_17db3a65980d3441] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");
          mids$[mid_setInterpolationDegree_99803b0791f320ff] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedEop::LazyLoadedEop(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ce23204880a56c8, a0.this$)) {}

      void LazyLoadedEop::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_ff1d8967dbd30cfb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_ff1d8967dbd30cfb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_0f554c95baa6eac9], a0.this$, a1.this$);
      }

      void LazyLoadedEop::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_0fa09c18fee449d5]);
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedEop::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_69fa4d0abe16d651]));
      }

      ::org::orekit::frames::EOPHistory LazyLoadedEop::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_4f61b29504ebc31d], a0.this$, a1, a2.this$));
      }

      void LazyLoadedEop::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_17db3a65980d3441], a0);
      }

      void LazyLoadedEop::setInterpolationDegree(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_99803b0791f320ff], a0);
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
      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data);
      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedEop__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedEop, dataProvidersManager),
        DECLARE_SET_FIELD(t_LazyLoadedEop, eOPContinuityThreshold),
        DECLARE_SET_FIELD(t_LazyLoadedEop, interpolationDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedEop__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedEop, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, setEOPContinuityThreshold, METH_O),
        DECLARE_METHOD(t_LazyLoadedEop, setInterpolationDegree, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedEop)[] = {
        { Py_tp_methods, t_LazyLoadedEop__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedEop_init_ },
        { Py_tp_getset, t_LazyLoadedEop__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedEop)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedEop, t_LazyLoadedEop, LazyLoadedEop);

      void t_LazyLoadedEop::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedEop), &PY_TYPE_DEF(LazyLoadedEop), module, "LazyLoadedEop", 0);
      }

      void t_LazyLoadedEop::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "class_", make_descriptor(LazyLoadedEop::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "wrapfn_", make_descriptor(t_LazyLoadedEop::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedEop::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedEop::wrap_Object(LazyLoadedEop(((t_LazyLoadedEop *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedEop::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        LazyLoadedEop object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedEop(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(self->object.addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1, a2));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setInterpolationDegree(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setInterpolationDegree(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SignalInSpaceAccuracy::class$ = NULL;
            jmethodID *SignalInSpaceAccuracy::mids$ = NULL;
            bool SignalInSpaceAccuracy::live$ = false;

            jclass SignalInSpaceAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SignalInSpaceAccuracy::SignalInSpaceAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            jdouble SignalInSpaceAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_dff5885c2c873297]);
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
          namespace common {
            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self);
            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data);
            static PyGetSetDef t_SignalInSpaceAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_SignalInSpaceAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SignalInSpaceAccuracy__methods_[] = {
              DECLARE_METHOD(t_SignalInSpaceAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SignalInSpaceAccuracy)[] = {
              { Py_tp_methods, t_SignalInSpaceAccuracy__methods_ },
              { Py_tp_init, (void *) t_SignalInSpaceAccuracy_init_ },
              { Py_tp_getset, t_SignalInSpaceAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SignalInSpaceAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SignalInSpaceAccuracy, t_SignalInSpaceAccuracy, SignalInSpaceAccuracy);

            void t_SignalInSpaceAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(SignalInSpaceAccuracy), &PY_TYPE_DEF(SignalInSpaceAccuracy), module, "SignalInSpaceAccuracy", 0);
            }

            void t_SignalInSpaceAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "class_", make_descriptor(SignalInSpaceAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "wrapfn_", make_descriptor(t_SignalInSpaceAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SignalInSpaceAccuracy::initializeClass, 1)))
                return NULL;
              return t_SignalInSpaceAccuracy::wrap_Object(SignalInSpaceAccuracy(((t_SignalInSpaceAccuracy *) arg)->object.this$));
            }
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SignalInSpaceAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SignalInSpaceAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SignalInSpaceAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldRuleFactory::class$ = NULL;
          jmethodID *FieldRuleFactory::mids$ = NULL;
          bool FieldRuleFactory::live$ = false;

          jclass FieldRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_e670405dd33862ee] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair FieldRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_e670405dd33862ee], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args);
          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data);
          static PyGetSetDef t_FieldRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRuleFactory)[] = {
            { Py_tp_methods, t_FieldRuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRuleFactory, t_FieldRuleFactory, FieldRuleFactory);
          PyObject *t_FieldRuleFactory::wrap_Object(const FieldRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRuleFactory), &PY_TYPE_DEF(FieldRuleFactory), module, "FieldRuleFactory", 0);
          }

          void t_FieldRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "class_", make_descriptor(FieldRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "wrapfn_", make_descriptor(t_FieldRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldRuleFactory::wrap_Object(FieldRuleFactory(((t_FieldRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagatorBuilder::class$ = NULL;
          jmethodID *SBASPropagatorBuilder::mids$ = NULL;
          bool SBASPropagatorBuilder::live$ = false;

          jclass SBASPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7d9236b5f915634d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;)V");
              mids$[mid_init$_ecd9971eb173b1e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_ceb94e6a435ccfe4] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_build_9dcd848e51dbc12c] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
              mids$[mid_ecef_4281a789e39824cd] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_eci_4281a789e39824cd] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mass_3d6615b27cea640d] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mu_3d6615b27cea640d] = env->getMethodID(cls, "mu", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d9236b5f915634d, a0.this$)) {}

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ecd9971eb173b1e6, a0.this$, a1.this$)) {}

          SBASPropagatorBuilder SBASPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_ceb94e6a435ccfe4], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_build_9dcd848e51dbc12c]));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_4281a789e39824cd], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_4281a789e39824cd], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mass(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_3d6615b27cea640d], a0));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mu(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mu_3d6615b27cea640d], a0));
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
          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self);
          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_SBASPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_SBASPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mass, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mu, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagatorBuilder)[] = {
            { Py_tp_methods, t_SBASPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_SBASPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SBASPropagatorBuilder, t_SBASPropagatorBuilder, SBASPropagatorBuilder);

          void t_SBASPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagatorBuilder), &PY_TYPE_DEF(SBASPropagatorBuilder), module, "SBASPropagatorBuilder", 0);
          }

          void t_SBASPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "class_", make_descriptor(SBASPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "wrapfn_", make_descriptor(t_SBASPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_SBASPropagatorBuilder::wrap_Object(SBASPropagatorBuilder(((t_SBASPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0, a1));
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

          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
          }

          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mu(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SubPlane::class$ = NULL;
          jmethodID *SubPlane::mids$ = NULL;
          bool SubPlane::live$ = false;

          jclass SubPlane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SubPlane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10e1fbe5774bfd91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_905725a56f20360c] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_802b885e8f150523] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubPlane::SubPlane(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_10e1fbe5774bfd91, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubPlane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_905725a56f20360c], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args);
          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args);
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data);
          static PyGetSetDef t_SubPlane__fields_[] = {
            DECLARE_GET_FIELD(t_SubPlane, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubPlane__methods_[] = {
            DECLARE_METHOD(t_SubPlane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubPlane, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubPlane)[] = {
            { Py_tp_methods, t_SubPlane__methods_ },
            { Py_tp_init, (void *) t_SubPlane_init_ },
            { Py_tp_getset, t_SubPlane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubPlane)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubPlane, t_SubPlane, SubPlane);
          PyObject *t_SubPlane::wrap_Object(const SubPlane& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubPlane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubPlane::install(PyObject *module)
          {
            installType(&PY_TYPE(SubPlane), &PY_TYPE_DEF(SubPlane), module, "SubPlane", 0);
          }

          void t_SubPlane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "class_", make_descriptor(SubPlane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "wrapfn_", make_descriptor(t_SubPlane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubPlane::initializeClass, 1)))
              return NULL;
            return t_SubPlane::wrap_Object(SubPlane(((t_SubPlane *) arg)->object.this$));
          }
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubPlane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubPlane object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubPlane(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            return callSuper(PY_TYPE(SubPlane), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data)
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
#include "java/util/TreeSet.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "java/util/SortedSet.h"
#include "java/lang/Object.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *TreeSet::class$ = NULL;
    jmethodID *TreeSet::mids$ = NULL;
    bool TreeSet::live$ = false;

    jclass TreeSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/TreeSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_aba33752f2449599] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
        mids$[mid_init$_5794fd067b349f51] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_17e918edc999b3c7] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_ceiling_9facd1449e0950d3] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_comparator_96e45e3694fbbb22] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_4d23511a9f0db098] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_024b2fed0d07125f] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_first_4d26fd885228c716] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_floor_9facd1449e0950d3] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_c07cc04010820225] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_3998b1c856c6bc87] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_9facd1449e0950d3] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_last_4d26fd885228c716] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_lower_9facd1449e0950d3] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_4d26fd885228c716] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_4d26fd885228c716] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_91c93627253b416a] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_8a24c3c47a25901f] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_c07cc04010820225] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_3998b1c856c6bc87] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TreeSet::TreeSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    TreeSet::TreeSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::Comparator & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_aba33752f2449599, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::SortedSet & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_5794fd067b349f51, a0.this$)) {}

    jboolean TreeSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    jboolean TreeSet::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17e918edc999b3c7], a0.this$);
    }

    ::java::lang::Object TreeSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_9facd1449e0950d3], a0.this$));
    }

    void TreeSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    ::java::lang::Object TreeSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    ::java::util::Comparator TreeSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_96e45e3694fbbb22]));
    }

    jboolean TreeSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    ::java::util::Iterator TreeSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_4d23511a9f0db098]));
    }

    ::java::util::NavigableSet TreeSet::descendingSet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_024b2fed0d07125f]));
    }

    ::java::lang::Object TreeSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_4d26fd885228c716]));
    }

    ::java::lang::Object TreeSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_9facd1449e0950d3], a0.this$));
    }

    ::java::util::SortedSet TreeSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_c07cc04010820225], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_3998b1c856c6bc87], a0.this$, a1));
    }

    ::java::lang::Object TreeSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_9facd1449e0950d3], a0.this$));
    }

    jboolean TreeSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Iterator TreeSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    ::java::lang::Object TreeSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_4d26fd885228c716]));
    }

    ::java::lang::Object TreeSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_9facd1449e0950d3], a0.this$));
    }

    ::java::lang::Object TreeSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_4d26fd885228c716]));
    }

    ::java::lang::Object TreeSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_4d26fd885228c716]));
    }

    jboolean TreeSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    jint TreeSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::util::Spliterator TreeSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
    }

    ::java::util::SortedSet TreeSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_91c93627253b416a], a0.this$, a1.this$));
    }

    ::java::util::NavigableSet TreeSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_8a24c3c47a25901f], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet TreeSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_c07cc04010820225], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_3998b1c856c6bc87], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args);
    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_clone(t_TreeSet *self);
    static PyObject *t_TreeSet_comparator(t_TreeSet *self);
    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self);
    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self);
    static PyObject *t_TreeSet_first(t_TreeSet *self);
    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_last(t_TreeSet *self);
    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self);
    static PyObject *t_TreeSet_pollLast(t_TreeSet *self);
    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data);
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data);
    static PyGetSetDef t_TreeSet__fields_[] = {
      DECLARE_GET_FIELD(t_TreeSet, empty),
      DECLARE_GET_FIELD(t_TreeSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_TreeSet__methods_[] = {
      DECLARE_METHOD(t_TreeSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, add, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, addAll, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, ceiling, METH_O),
      DECLARE_METHOD(t_TreeSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, first, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, floor, METH_O),
      DECLARE_METHOD(t_TreeSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, higher, METH_O),
      DECLARE_METHOD(t_TreeSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, last, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, lower, METH_O),
      DECLARE_METHOD(t_TreeSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, size, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(TreeSet)[] = {
      { Py_tp_methods, t_TreeSet__methods_ },
      { Py_tp_init, (void *) t_TreeSet_init_ },
      { Py_tp_getset, t_TreeSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_TreeSet *)) get_generic_iterator< t_TreeSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(TreeSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(TreeSet, t_TreeSet, TreeSet);
    PyObject *t_TreeSet::wrap_Object(const TreeSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_TreeSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_TreeSet::install(PyObject *module)
    {
      installType(&PY_TYPE(TreeSet), &PY_TYPE_DEF(TreeSet), module, "TreeSet", 0);
    }

    void t_TreeSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "class_", make_descriptor(TreeSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "wrapfn_", make_descriptor(t_TreeSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, TreeSet::initializeClass, 1)))
        return NULL;
      return t_TreeSet::wrap_Object(TreeSet(((t_TreeSet *) arg)->object.this$));
    }
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, TreeSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          TreeSet object((jobject) NULL);

          INT_CALL(object = TreeSet());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
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

    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_TreeSet_clone(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_comparator(t_TreeSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_first(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_TreeSet_last(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_pollLast(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", args);
      return NULL;
    }
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSAlmanac::class$ = NULL;
            jmethodID *GPSAlmanac::mids$ = NULL;
            bool GPSAlmanac::live$ = false;

            jclass GPSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSVN_570ce0828f81a2c1] = env->getMethodID(cls, "getSVN", "()I");
                mids$[mid_getSatConfiguration_570ce0828f81a2c1] = env->getMethodID(cls, "getSatConfiguration", "()I");
                mids$[mid_getSource_11b109bd155ca898] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_getTGD_dff5885c2c873297] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_570ce0828f81a2c1] = env->getMethodID(cls, "getURA", "()I");
                mids$[mid_setHealth_99803b0791f320ff] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSVN_99803b0791f320ff] = env->getMethodID(cls, "setSVN", "(I)V");
                mids$[mid_setSatConfiguration_99803b0791f320ff] = env->getMethodID(cls, "setSatConfiguration", "(I)V");
                mids$[mid_setSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_17db3a65980d3441] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setURA_99803b0791f320ff] = env->getMethodID(cls, "setURA", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSAlmanac::GPSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jint GPSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_570ce0828f81a2c1]);
            }

            jint GPSAlmanac::getSVN() const
            {
              return env->callIntMethod(this$, mids$[mid_getSVN_570ce0828f81a2c1]);
            }

            jint GPSAlmanac::getSatConfiguration() const
            {
              return env->callIntMethod(this$, mids$[mid_getSatConfiguration_570ce0828f81a2c1]);
            }

            ::java::lang::String GPSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_11b109bd155ca898]));
            }

            jdouble GPSAlmanac::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_dff5885c2c873297]);
            }

            jint GPSAlmanac::getURA() const
            {
              return env->callIntMethod(this$, mids$[mid_getURA_570ce0828f81a2c1]);
            }

            void GPSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_99803b0791f320ff], a0);
            }

            void GPSAlmanac::setSVN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSVN_99803b0791f320ff], a0);
            }

            void GPSAlmanac::setSatConfiguration(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatConfiguration_99803b0791f320ff], a0);
            }

            void GPSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_d0bc48d5b00dc40c], a0.this$);
            }

            void GPSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_17db3a65980d3441], a0);
            }

            void GPSAlmanac::setURA(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_99803b0791f320ff], a0);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data);
            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data);
            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GPSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_GPSAlmanac, health),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, sVN),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, satConfiguration),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, source),
              DECLARE_SET_FIELD(t_GPSAlmanac, sqrtA),
              DECLARE_GET_FIELD(t_GPSAlmanac, tGD),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GPSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GPSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSVN, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSatConfiguration, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSVN, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSatConfiguration, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSqrtA, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSAlmanac)[] = {
              { Py_tp_methods, t_GPSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GPSAlmanac_init_ },
              { Py_tp_getset, t_GPSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GPSAlmanac, t_GPSAlmanac, GPSAlmanac);

            void t_GPSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSAlmanac), &PY_TYPE_DEF(GPSAlmanac), module, "GPSAlmanac", 0);
            }

            void t_GPSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "class_", make_descriptor(GPSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "wrapfn_", make_descriptor(t_GPSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GPSAlmanac::wrap_Object(GPSAlmanac(((t_GPSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GPSAlmanac object((jobject) NULL);

              INT_CALL(object = GPSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSVN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSatConfiguration());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getURA());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSVN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSVN", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSatConfiguration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatConfiguration", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSVN());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSVN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sVN", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSatConfiguration());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSatConfiguration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satConfiguration", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getURA());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/orekit/propagation/analytical/tle/DeepSDP4.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *DeepSDP4::class$ = NULL;
          jmethodID *DeepSDP4::mids$ = NULL;
          bool DeepSDP4::live$ = false;

          jclass DeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/DeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_11c826170d15cb79] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_2709a562b7f01856] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_luniSolarTermsComputation_0fa09c18fee449d5] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_17db3a65980d3441] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_17db3a65980d3441] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_11c826170d15cb79, a0.this$, a1.this$, a2)) {}

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_2709a562b7f01856, a0.this$, a1.this$, a2, a3.this$)) {}
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
        namespace tle {
          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_DeepSDP4__methods_[] = {
            DECLARE_METHOD(t_DeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DeepSDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DeepSDP4)[] = {
            { Py_tp_methods, t_DeepSDP4__methods_ },
            { Py_tp_init, (void *) t_DeepSDP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::SDP4),
            NULL
          };

          DEFINE_TYPE(DeepSDP4, t_DeepSDP4, DeepSDP4);

          void t_DeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(DeepSDP4), &PY_TYPE_DEF(DeepSDP4), module, "DeepSDP4", 0);
          }

          void t_DeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "class_", make_descriptor(DeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "wrapfn_", make_descriptor(t_DeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DeepSDP4::initializeClass, 1)))
              return NULL;
            return t_DeepSDP4::wrap_Object(DeepSDP4(((t_DeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2, a3));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/TTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *TTest::class$ = NULL;
        jmethodID *TTest::mids$ = NULL;
        bool TTest::live$ = false;

        jclass TTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/TTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_homoscedasticT_b561c6892e9976f8] = env->getMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_a6a21e289ffe5810] = env->getMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_b561c6892e9976f8] = env->getMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_a6a21e289ffe5810] = env->getMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_ed0fb6ee68c33cca] = env->getMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_pairedT_b561c6892e9976f8] = env->getMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_b561c6892e9976f8] = env->getMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_ed0fb6ee68c33cca] = env->getMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_t_b561c6892e9976f8] = env->getMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_19285de97bbc7eea] = env->getMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_0951dfc4a2f63f29] = env->getMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_a6a21e289ffe5810] = env->getMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_b561c6892e9976f8] = env->getMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_19285de97bbc7eea] = env->getMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_0951dfc4a2f63f29] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_a6a21e289ffe5810] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_ed0fb6ee68c33cca] = env->getMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_97483ecb885b04db] = env->getMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_d69003036bf27add] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_92d1c61945f36e5b] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_t_07e50dbdbc6e25b6] = env->getMethodID(cls, "t", "(DDDDDD)D");
            mids$[mid_t_0f015b8be9d2dc40] = env->getMethodID(cls, "t", "(DDDD)D");
            mids$[mid_df_0f015b8be9d2dc40] = env->getMethodID(cls, "df", "(DDDD)D");
            mids$[mid_homoscedasticT_07e50dbdbc6e25b6] = env->getMethodID(cls, "homoscedasticT", "(DDDDDD)D");
            mids$[mid_homoscedasticTTest_07e50dbdbc6e25b6] = env->getMethodID(cls, "homoscedasticTTest", "(DDDDDD)D");
            mids$[mid_tTest_0f015b8be9d2dc40] = env->getMethodID(cls, "tTest", "(DDDD)D");
            mids$[mid_tTest_07e50dbdbc6e25b6] = env->getMethodID(cls, "tTest", "(DDDDDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TTest::TTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble TTest::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_a6a21e289ffe5810], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_a6a21e289ffe5810], a0.this$, a1.this$);
        }

        jboolean TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_homoscedasticTTest_ed0fb6ee68c33cca], a0.this$, a1.this$, a2);
        }

        jdouble TTest::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedT_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedTTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jboolean TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_pairedTTest_ed0fb6ee68c33cca], a0.this$, a1.this$, a2);
        }

        jdouble TTest::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_19285de97bbc7eea], a0, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_0951dfc4a2f63f29], a0, a1.this$);
        }

        jdouble TTest::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_a6a21e289ffe5810], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_19285de97bbc7eea], a0, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_0951dfc4a2f63f29], a0, a1.this$);
        }

        jdouble TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_a6a21e289ffe5810], a0.this$, a1.this$);
        }

        jboolean TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_ed0fb6ee68c33cca], a0.this$, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_97483ecb885b04db], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_d69003036bf27add], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_92d1c61945f36e5b], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_t(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args);

        static PyMethodDef t_TTest__methods_[] = {
          DECLARE_METHOD(t_TTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, homoscedasticT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, homoscedasticTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, t, METH_VARARGS),
          DECLARE_METHOD(t_TTest, tTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TTest)[] = {
          { Py_tp_methods, t_TTest__methods_ },
          { Py_tp_init, (void *) t_TTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TTest, t_TTest, TTest);

        void t_TTest::install(PyObject *module)
        {
          installType(&PY_TYPE(TTest), &PY_TYPE_DEF(TTest), module, "TTest", 0);
        }

        void t_TTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "class_", make_descriptor(TTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "wrapfn_", make_descriptor(t_TTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TTest::initializeClass, 1)))
            return NULL;
          return t_TTest::wrap_Object(TTest(((t_TTest *) arg)->object.this$));
        }
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds)
        {
          TTest object((jobject) NULL);

          INT_CALL(object = TTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pairedT", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_t(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "t", args);
          return NULL;
        }

        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *AbstractBuilder::class$ = NULL;
          jmethodID *AbstractBuilder::mids$ = NULL;
          bool AbstractBuilder::live$ = false;

          jclass AbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/AbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_60f9ded87ab7ca4c] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_0b7cf48ee6a922ee] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getEquatorialRadius_dff5885c2c873297] = env->getMethodID(cls, "getEquatorialRadius", "()D");
              mids$[mid_getFlattening_dff5885c2c873297] = env->getMethodID(cls, "getFlattening", "()D");
              mids$[mid_getMissionReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getRangeUnitsConverter_ce2b21d91cfcb6bd] = env->getMethodID(cls, "getRangeUnitsConverter", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;");
              mids$[mid_withConventions_c41393f9593112cc] = env->getMethodID(cls, "withConventions", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withDataContext_c1f7b3ad887fbffd] = env->getMethodID(cls, "withDataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withEquatorialRadius_b764e0c530a10809] = env->getMethodID(cls, "withEquatorialRadius", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withFlattening_b764e0c530a10809] = env->getMethodID(cls, "withFlattening", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withMissionReferenceDate_0c67bdd3ec905004] = env->getMethodID(cls, "withMissionReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withRangeUnitsConverter_b77f4525fccbf560] = env->getMethodID(cls, "withRangeUnitsConverter", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_create_56bdb47287753acf] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions AbstractBuilder::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_60f9ded87ab7ca4c]));
          }

          ::org::orekit::data::DataContext AbstractBuilder::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_0b7cf48ee6a922ee]));
          }

          jdouble AbstractBuilder::getEquatorialRadius() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_dff5885c2c873297]);
          }

          jdouble AbstractBuilder::getFlattening() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlattening_dff5885c2c873297]);
          }

          ::org::orekit::time::AbsoluteDate AbstractBuilder::getMissionReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_85703d13e302437e]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter AbstractBuilder::getRangeUnitsConverter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(env->callObjectMethod(this$, mids$[mid_getRangeUnitsConverter_ce2b21d91cfcb6bd]));
          }

          AbstractBuilder AbstractBuilder::withConventions(const ::org::orekit::utils::IERSConventions & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withConventions_c41393f9593112cc], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withDataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withDataContext_c1f7b3ad887fbffd], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withEquatorialRadius(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withEquatorialRadius_b764e0c530a10809], a0));
          }

          AbstractBuilder AbstractBuilder::withFlattening(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withFlattening_b764e0c530a10809], a0));
          }

          AbstractBuilder AbstractBuilder::withMissionReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withMissionReferenceDate_0c67bdd3ec905004], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withRangeUnitsConverter(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withRangeUnitsConverter_b77f4525fccbf560], a0.this$));
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
          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args);
          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data);
          static PyGetSetDef t_AbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractBuilder, conventions),
            DECLARE_GET_FIELD(t_AbstractBuilder, dataContext),
            DECLARE_GET_FIELD(t_AbstractBuilder, equatorialRadius),
            DECLARE_GET_FIELD(t_AbstractBuilder, flattening),
            DECLARE_GET_FIELD(t_AbstractBuilder, missionReferenceDate),
            DECLARE_GET_FIELD(t_AbstractBuilder, rangeUnitsConverter),
            DECLARE_GET_FIELD(t_AbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractBuilder, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getEquatorialRadius, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getFlattening, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getMissionReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getRangeUnitsConverter, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, withConventions, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withDataContext, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withEquatorialRadius, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withFlattening, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withMissionReferenceDate, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withRangeUnitsConverter, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractBuilder)[] = {
            { Py_tp_methods, t_AbstractBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractBuilder, t_AbstractBuilder, AbstractBuilder);
          PyObject *t_AbstractBuilder::wrap_Object(const AbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractBuilder), &PY_TYPE_DEF(AbstractBuilder), module, "AbstractBuilder", 0);
          }

          void t_AbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "class_", make_descriptor(AbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "wrapfn_", make_descriptor(t_AbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractBuilder::wrap_Object(AbstractBuilder(((t_AbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFlattening());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.withConventions(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withConventions", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withDataContext(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDataContext", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withEquatorialRadius(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEquatorialRadius", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withFlattening(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withFlattening", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withMissionReferenceDate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMissionReferenceDate", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withRangeUnitsConverter(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withRangeUnitsConverter", arg);
            return NULL;
          }
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlattening());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter value((jobject) NULL);
            OBJ_CALL(value = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseMultiStartMultivariateOptimizer.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseMultiStartMultivariateOptimizer::class$ = NULL;
      jmethodID *BaseMultiStartMultivariateOptimizer::mids$ = NULL;
      bool BaseMultiStartMultivariateOptimizer::live$ = false;

      jclass BaseMultiStartMultivariateOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseMultiStartMultivariateOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_21803bda49e8e21c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/BaseMultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
          mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getOptima_b93c730013ce64c6] = env->getMethodID(cls, "getOptima", "()[Ljava/lang/Object;");
          mids$[mid_optimize_19319236ce3fd082] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_doOptimize_4d26fd885228c716] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_store_2990946c992aafed] = env->getMethodID(cls, "store", "(Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BaseMultiStartMultivariateOptimizer::BaseMultiStartMultivariateOptimizer(const ::org::hipparchus::optim::BaseMultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_21803bda49e8e21c, a0.this$, a1, a2.this$)) {}

      jint BaseMultiStartMultivariateOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
      }

      JArray< ::java::lang::Object > BaseMultiStartMultivariateOptimizer::getOptima() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getOptima_b93c730013ce64c6]));
      }

      ::java::lang::Object BaseMultiStartMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_19319236ce3fd082], a0.this$));
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
      static PyObject *t_BaseMultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_of_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static int t_BaseMultiStartMultivariateOptimizer_init_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_getEvaluations(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_getOptima(t_BaseMultiStartMultivariateOptimizer *self);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_optimize(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__evaluations(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__optima(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__parameters_(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyGetSetDef t_BaseMultiStartMultivariateOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, evaluations),
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, optima),
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseMultiStartMultivariateOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, getEvaluations, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, getOptima, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseMultiStartMultivariateOptimizer)[] = {
        { Py_tp_methods, t_BaseMultiStartMultivariateOptimizer__methods_ },
        { Py_tp_init, (void *) t_BaseMultiStartMultivariateOptimizer_init_ },
        { Py_tp_getset, t_BaseMultiStartMultivariateOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseMultiStartMultivariateOptimizer)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultivariateOptimizer),
        NULL
      };

      DEFINE_TYPE(BaseMultiStartMultivariateOptimizer, t_BaseMultiStartMultivariateOptimizer, BaseMultiStartMultivariateOptimizer);
      PyObject *t_BaseMultiStartMultivariateOptimizer::wrap_Object(const BaseMultiStartMultivariateOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultiStartMultivariateOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultiStartMultivariateOptimizer *self = (t_BaseMultiStartMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseMultiStartMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultiStartMultivariateOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultiStartMultivariateOptimizer *self = (t_BaseMultiStartMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseMultiStartMultivariateOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseMultiStartMultivariateOptimizer), &PY_TYPE_DEF(BaseMultiStartMultivariateOptimizer), module, "BaseMultiStartMultivariateOptimizer", 0);
      }

      void t_BaseMultiStartMultivariateOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "class_", make_descriptor(BaseMultiStartMultivariateOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "wrapfn_", make_descriptor(t_BaseMultiStartMultivariateOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseMultiStartMultivariateOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseMultiStartMultivariateOptimizer::wrap_Object(BaseMultiStartMultivariateOptimizer(((t_BaseMultiStartMultivariateOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseMultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseMultiStartMultivariateOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_of_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_BaseMultiStartMultivariateOptimizer_init_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::optim::BaseMultivariateOptimizer a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::hipparchus::random::RandomVectorGenerator a2((jobject) NULL);
        BaseMultiStartMultivariateOptimizer object((jobject) NULL);

        if (!parseArgs(args, "KIk", ::org::hipparchus::optim::BaseMultivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomVectorGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_BaseMultivariateOptimizer::parameters_, &a1, &a2))
        {
          INT_CALL(object = BaseMultiStartMultivariateOptimizer(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_getEvaluations(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BaseMultiStartMultivariateOptimizer), (PyObject *) self, "getEvaluations", args, 2);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_getOptima(t_BaseMultiStartMultivariateOptimizer *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getOptima());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_optimize(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.optimize(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BaseMultiStartMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
      }
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__parameters_(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__evaluations(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__optima(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getOptima());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *CommonGnssData::class$ = NULL;
            jmethodID *CommonGnssData::mids$ = NULL;
            bool CommonGnssData::live$ = false;

            jclass CommonGnssData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CommonGnssData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf0_dff5885c2c873297] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_dff5885c2c873297] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAngularVelocity_dff5885c2c873297] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCycleDuration_dff5885c2c873297] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_dff5885c2c873297] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getM0_dff5885c2c873297] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_dff5885c2c873297] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_dff5885c2c873297] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_570ce0828f81a2c1] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_dff5885c2c873297] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getSma_dff5885c2c873297] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_570ce0828f81a2c1] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAf0_17db3a65980d3441] = env->getMethodID(cls, "setAf0", "(D)V");
                mids$[mid_setAf1_17db3a65980d3441] = env->getMethodID(cls, "setAf1", "(D)V");
                mids$[mid_setDate_600a2a61652bc473] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setE_17db3a65980d3441] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setI0_17db3a65980d3441] = env->getMethodID(cls, "setI0", "(D)V");
                mids$[mid_setM0_17db3a65980d3441] = env->getMethodID(cls, "setM0", "(D)V");
                mids$[mid_setOmega0_17db3a65980d3441] = env->getMethodID(cls, "setOmega0", "(D)V");
                mids$[mid_setOmegaDot_17db3a65980d3441] = env->getMethodID(cls, "setOmegaDot", "(D)V");
                mids$[mid_setPRN_99803b0791f320ff] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setPa_17db3a65980d3441] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setSma_17db3a65980d3441] = env->getMethodID(cls, "setSma", "(D)V");
                mids$[mid_setTime_17db3a65980d3441] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setWeek_99803b0791f320ff] = env->getMethodID(cls, "setWeek", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonGnssData::CommonGnssData(jdouble a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

            jdouble CommonGnssData::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_dff5885c2c873297]);
            }

            ::org::orekit::time::AbsoluteDate CommonGnssData::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
            }

            jdouble CommonGnssData::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_dff5885c2c873297]);
            }

            jint CommonGnssData::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_570ce0828f81a2c1]);
            }

            jdouble CommonGnssData::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_dff5885c2c873297]);
            }

            jdouble CommonGnssData::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
            }

            jint CommonGnssData::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_570ce0828f81a2c1]);
            }

            void CommonGnssData::setAf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf0_17db3a65980d3441], a0);
            }

            void CommonGnssData::setAf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf1_17db3a65980d3441], a0);
            }

            void CommonGnssData::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_600a2a61652bc473], a0.this$);
            }

            void CommonGnssData::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_17db3a65980d3441], a0);
            }

            void CommonGnssData::setI0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_17db3a65980d3441], a0);
            }

            void CommonGnssData::setM0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setM0_17db3a65980d3441], a0);
            }

            void CommonGnssData::setOmega0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmega0_17db3a65980d3441], a0);
            }

            void CommonGnssData::setOmegaDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmegaDot_17db3a65980d3441], a0);
            }

            void CommonGnssData::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_99803b0791f320ff], a0);
            }

            void CommonGnssData::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_17db3a65980d3441], a0);
            }

            void CommonGnssData::setSma(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSma_17db3a65980d3441], a0);
            }

            void CommonGnssData::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_17db3a65980d3441], a0);
            }

            void CommonGnssData::setWeek(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeek_99803b0791f320ff], a0);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyGetSetDef t_CommonGnssData__fields_[] = {
              DECLARE_GETSET_FIELD(t_CommonGnssData, af0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, af1),
              DECLARE_GET_FIELD(t_CommonGnssData, angularVelocity),
              DECLARE_GET_FIELD(t_CommonGnssData, cycleDuration),
              DECLARE_GETSET_FIELD(t_CommonGnssData, date),
              DECLARE_GETSET_FIELD(t_CommonGnssData, e),
              DECLARE_GETSET_FIELD(t_CommonGnssData, i0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, m0),
              DECLARE_GET_FIELD(t_CommonGnssData, mu),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omega0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omegaDot),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pRN),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pa),
              DECLARE_GETSET_FIELD(t_CommonGnssData, sma),
              DECLARE_GETSET_FIELD(t_CommonGnssData, time),
              DECLARE_GETSET_FIELD(t_CommonGnssData, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonGnssData__methods_[] = {
              DECLARE_METHOD(t_CommonGnssData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getDate, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getE, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getI0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getM0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getMu, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPa, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getSma, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getTime, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, setAf0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setAf1, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setDate, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setE, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setI0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setM0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmega0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmegaDot, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPRN, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPa, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setSma, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setTime, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setWeek, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonGnssData)[] = {
              { Py_tp_methods, t_CommonGnssData__methods_ },
              { Py_tp_init, (void *) t_CommonGnssData_init_ },
              { Py_tp_getset, t_CommonGnssData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonGnssData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CommonGnssData, t_CommonGnssData, CommonGnssData);

            void t_CommonGnssData::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonGnssData), &PY_TYPE_DEF(CommonGnssData), module, "CommonGnssData", 0);
            }

            void t_CommonGnssData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "class_", make_descriptor(CommonGnssData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "wrapfn_", make_descriptor(t_CommonGnssData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonGnssData::initializeClass, 1)))
                return NULL;
              return t_CommonGnssData::wrap_Object(CommonGnssData(((t_CommonGnssData *) arg)->object.this$));
            }
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonGnssData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              CommonGnssData object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = CommonGnssData(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf1", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setM0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setM0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmega0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmega0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmegaDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmegaDot", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSma(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSma", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setWeek(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeek", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af1", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setM0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "m0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmega0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omega0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmegaDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omegaDot", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSma(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sma", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setWeek(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "week", arg);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1058::class$ = NULL;
              jmethodID *Rtcm1058::mids$ = NULL;
              bool Rtcm1058::live$ = false;

              jclass Rtcm1058::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1b582be2cf76d4b0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1058::Rtcm1058(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_1b582be2cf76d4b0, a0, a1.this$, a2.this$)) {}
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
            namespace correction {
              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args);
              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data);
              static PyGetSetDef t_Rtcm1058__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1058, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1058__methods_[] = {
                DECLARE_METHOD(t_Rtcm1058, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1058)[] = {
                { Py_tp_methods, t_Rtcm1058__methods_ },
                { Py_tp_init, (void *) t_Rtcm1058_init_ },
                { Py_tp_getset, t_Rtcm1058__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1058)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1058, t_Rtcm1058, Rtcm1058);
              PyObject *t_Rtcm1058::wrap_Object(const Rtcm1058& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1058::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1058::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1058), &PY_TYPE_DEF(Rtcm1058), module, "Rtcm1058", 0);
              }

              void t_Rtcm1058::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "class_", make_descriptor(Rtcm1058::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "wrapfn_", make_descriptor(t_Rtcm1058::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1058::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1058::wrap_Object(Rtcm1058(((t_Rtcm1058 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1058::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1058 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1058(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data)
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
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$ReaderOpener::class$ = NULL;
      jmethodID *DataSource$ReaderOpener::mids$ = NULL;
      bool DataSource$ReaderOpener::live$ = false;

      jclass DataSource$ReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$ReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_26c6a3f16521a493] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$ReaderOpener::openOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openOnce_26c6a3f16521a493]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self);

      static PyMethodDef t_DataSource$ReaderOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$ReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$ReaderOpener)[] = {
        { Py_tp_methods, t_DataSource$ReaderOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$ReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$ReaderOpener, t_DataSource$ReaderOpener, DataSource$ReaderOpener);

      void t_DataSource$ReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$ReaderOpener), &PY_TYPE_DEF(DataSource$ReaderOpener), module, "DataSource$ReaderOpener", 0);
      }

      void t_DataSource$ReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "class_", make_descriptor(DataSource$ReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "wrapfn_", make_descriptor(t_DataSource$ReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$ReaderOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$ReaderOpener::wrap_Object(DataSource$ReaderOpener(((t_DataSource$ReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$ReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSatelliteEphemeris::class$ = NULL;
              jmethodID *OemSatelliteEphemeris::mids$ = NULL;
              bool OemSatelliteEphemeris::live$ = false;

              jclass OemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_659ce81fb27f7feb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSatelliteEphemeris::OemSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_659ce81fb27f7feb, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
              }

              jdouble OemSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
              }

              ::java::util::List OemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
            namespace oem {
              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OemSatelliteEphemeris, t_OemSatelliteEphemeris, OemSatelliteEphemeris);

              void t_OemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSatelliteEphemeris), &PY_TYPE_DEF(OemSatelliteEphemeris), module, "OemSatelliteEphemeris", 0);
              }

              void t_OemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "class_", make_descriptor(OemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "wrapfn_", make_descriptor(t_OemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OemSatelliteEphemeris::wrap_Object(OemSatelliteEphemeris(((t_OemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OemSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment));
              }

              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/time/PythonDatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonDatesSelector::class$ = NULL;
      jmethodID *PythonDatesSelector::mids$ = NULL;
      bool PythonDatesSelector::live$ = false;

      jclass PythonDatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonDatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_selectDates_8060cef9318d72e3] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDatesSelector::PythonDatesSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonDatesSelector::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonDatesSelector::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonDatesSelector::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self);
      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args);
      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data);
      static PyGetSetDef t_PythonDatesSelector__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDatesSelector, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDatesSelector__methods_[] = {
        DECLARE_METHOD(t_PythonDatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDatesSelector, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDatesSelector)[] = {
        { Py_tp_methods, t_PythonDatesSelector__methods_ },
        { Py_tp_init, (void *) t_PythonDatesSelector_init_ },
        { Py_tp_getset, t_PythonDatesSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDatesSelector, t_PythonDatesSelector, PythonDatesSelector);

      void t_PythonDatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDatesSelector), &PY_TYPE_DEF(PythonDatesSelector), module, "PythonDatesSelector", 1);
      }

      void t_PythonDatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "class_", make_descriptor(PythonDatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "wrapfn_", make_descriptor(t_PythonDatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDatesSelector::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDatesSelector_pythonDecRef0 },
          { "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonDatesSelector_selectDates1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDatesSelector::initializeClass, 1)))
          return NULL;
        return t_PythonDatesSelector::wrap_Object(PythonDatesSelector(((t_PythonDatesSelector *) arg)->object.this$));
      }
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds)
      {
        PythonDatesSelector object((jobject) NULL);

        INT_CALL(object = PythonDatesSelector());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args)
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

      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "selectDates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("selectDates", result);
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

      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/SequentialBatchLSEstimator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *SequentialBatchLSEstimator::class$ = NULL;
        jmethodID *SequentialBatchLSEstimator::mids$ = NULL;
        bool SequentialBatchLSEstimator::live$ = false;

        jclass SequentialBatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/SequentialBatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1b4891c95e09500c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SequentialBatchLSEstimator::SequentialBatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::org::orekit::estimation::leastsquares::BatchLSEstimator(env->newObject(initializeClass, &mids$, mid_init$_1b4891c95e09500c, a0.this$, a1.this$)) {}
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
      namespace leastsquares {
        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SequentialBatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_SequentialBatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SequentialBatchLSEstimator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SequentialBatchLSEstimator)[] = {
          { Py_tp_methods, t_SequentialBatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_SequentialBatchLSEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SequentialBatchLSEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::BatchLSEstimator),
          NULL
        };

        DEFINE_TYPE(SequentialBatchLSEstimator, t_SequentialBatchLSEstimator, SequentialBatchLSEstimator);

        void t_SequentialBatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SequentialBatchLSEstimator), &PY_TYPE_DEF(SequentialBatchLSEstimator), module, "SequentialBatchLSEstimator", 0);
        }

        void t_SequentialBatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "class_", make_descriptor(SequentialBatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "wrapfn_", make_descriptor(t_SequentialBatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SequentialBatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_SequentialBatchLSEstimator::wrap_Object(SequentialBatchLSEstimator(((t_SequentialBatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SequentialBatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          SequentialBatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = SequentialBatchLSEstimator(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *FieldOrekitStepInterpolator::mids$ = NULL;
        bool FieldOrekitStepInterpolator::live$ = false;

        jclass FieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_02cea343d9f71933] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_f6f1ea8aef3019eb] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPreviousState_02cea343d9f71933] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_restrictStep_7098fa5da93d95de] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_02cea343d9f71933]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_f6f1ea8aef3019eb], a0.this$));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_02cea343d9f71933]));
        }

        jboolean FieldOrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        FieldOrekitStepInterpolator FieldOrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
        {
          return FieldOrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_7098fa5da93d95de], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_FieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_FieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepInterpolator, t_FieldOrekitStepInterpolator, FieldOrekitStepInterpolator);
        PyObject *t_FieldOrekitStepInterpolator::wrap_Object(const FieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepInterpolator), &PY_TYPE_DEF(FieldOrekitStepInterpolator), module, "FieldOrekitStepInterpolator", 0);
        }

        void t_FieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "class_", make_descriptor(FieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_FieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepInterpolator::wrap_Object(FieldOrekitStepInterpolator(((t_FieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldOrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_FieldOrekitStepInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/ICGEMFormatReader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/io/InputStream.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *ICGEMFormatReader::class$ = NULL;
          jmethodID *ICGEMFormatReader::mids$ = NULL;
          bool ICGEMFormatReader::live$ = false;

          jclass ICGEMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/ICGEMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d6df10f4e35ef1e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_b0bdaadf6311e767] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_fc0a96c558346426] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d6df10f4e35ef1e8, a0.this$, a1)) {}

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_b0bdaadf6311e767, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider ICGEMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_fc0a96c558346426], a0, a1, a2));
          }

          void ICGEMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args);
          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args);

          static PyMethodDef t_ICGEMFormatReader__methods_[] = {
            DECLARE_METHOD(t_ICGEMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_ICGEMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ICGEMFormatReader)[] = {
            { Py_tp_methods, t_ICGEMFormatReader__methods_ },
            { Py_tp_init, (void *) t_ICGEMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ICGEMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(ICGEMFormatReader, t_ICGEMFormatReader, ICGEMFormatReader);

          void t_ICGEMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(ICGEMFormatReader), &PY_TYPE_DEF(ICGEMFormatReader), module, "ICGEMFormatReader", 0);
          }

          void t_ICGEMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "class_", make_descriptor(ICGEMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "wrapfn_", make_descriptor(t_ICGEMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ICGEMFormatReader::initializeClass, 1)))
              return NULL;
            return t_ICGEMFormatReader::wrap_Object(ICGEMFormatReader(((t_ICGEMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ICGEMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1, a2));
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

          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldDateDetector::class$ = NULL;
        jmethodID *FieldDateDetector::mids$ = NULL;
        bool FieldDateDetector::live$ = false;
        jdouble FieldDateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldDateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldDateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e72ca4cebbe9d48d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/orekit/time/FieldTimeStamped;)V");
            mids$[mid_addEventDate_d17277e76a7ead14] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getDates_2afa36052df4765d] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_62798d6be777ffc5] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/FieldDateDetector;");
            mids$[mid_create_33c3f4cc95ed1506] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldDateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDateDetector::FieldDateDetector(const ::org::hipparchus::Field & a0, const JArray< ::org::orekit::time::FieldTimeStamped > & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e72ca4cebbe9d48d, a0.this$, a1.this$)) {}

        void FieldDateDetector::addEventDate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_d17277e76a7ead14], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldDateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldDateDetector::getDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
        }

        ::java::util::List FieldDateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_2afa36052df4765d]));
        }

        FieldDateDetector FieldDateDetector::withMinGap(jdouble a0) const
        {
          return FieldDateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_62798d6be777ffc5], a0));
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
        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args);
        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args);
        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data);
        static PyGetSetDef t_FieldDateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDateDetector, date),
          DECLARE_GET_FIELD(t_FieldDateDetector, dates),
          DECLARE_GET_FIELD(t_FieldDateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldDateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_FieldDateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDateDetector)[] = {
          { Py_tp_methods, t_FieldDateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldDateDetector_init_ },
          { Py_tp_getset, t_FieldDateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldDateDetector, t_FieldDateDetector, FieldDateDetector);
        PyObject *t_FieldDateDetector::wrap_Object(const FieldDateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDateDetector), &PY_TYPE_DEF(FieldDateDetector), module, "FieldDateDetector", 0);
        }

        void t_FieldDateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "class_", make_descriptor(FieldDateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "wrapfn_", make_descriptor(t_FieldDateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldDateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MAX_CHECK", make_descriptor(FieldDateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MIN_GAP", make_descriptor(FieldDateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldDateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldDateDetector::wrap_Object(FieldDateDetector(((t_FieldDateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::time::FieldTimeStamped > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDateDetector object((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
          {
            INT_CALL(object = FieldDateDetector(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldDateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldDateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_FieldDateDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDates());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeExtremumDetector::class$ = NULL;
        jmethodID *LongitudeExtremumDetector::mids$ = NULL;
        bool LongitudeExtremumDetector::live$ = false;

        jclass LongitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7c502fc601af6f77] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_b67b42078e2e878c] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_6f78da94fd048d9d] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_f4c7a8d14197c62d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeExtremumDetector::LongitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7c502fc601af6f77, a0.this$)) {}

        LongitudeExtremumDetector::LongitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b67b42078e2e878c, a0, a1, a2.this$)) {}

        jdouble LongitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LongitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_6f78da94fd048d9d]));
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
        static PyObject *t_LongitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeExtremumDetector_of_(t_LongitudeExtremumDetector *self, PyObject *args);
        static int t_LongitudeExtremumDetector_init_(t_LongitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeExtremumDetector_g(t_LongitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LongitudeExtremumDetector_getBody(t_LongitudeExtremumDetector *self);
        static PyObject *t_LongitudeExtremumDetector_get__body(t_LongitudeExtremumDetector *self, void *data);
        static PyObject *t_LongitudeExtremumDetector_get__parameters_(t_LongitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LongitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LongitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LongitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LongitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeExtremumDetector, t_LongitudeExtremumDetector, LongitudeExtremumDetector);
        PyObject *t_LongitudeExtremumDetector::wrap_Object(const LongitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeExtremumDetector *self = (t_LongitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeExtremumDetector *self = (t_LongitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeExtremumDetector), &PY_TYPE_DEF(LongitudeExtremumDetector), module, "LongitudeExtremumDetector", 0);
        }

        void t_LongitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "class_", make_descriptor(LongitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "wrapfn_", make_descriptor(t_LongitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeExtremumDetector::wrap_Object(LongitudeExtremumDetector(((t_LongitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeExtremumDetector_of_(t_LongitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeExtremumDetector_init_(t_LongitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LongitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LongitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LongitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LongitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeExtremumDetector);
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

        static PyObject *t_LongitudeExtremumDetector_g(t_LongitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeExtremumDetector_getBody(t_LongitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LongitudeExtremumDetector_get__parameters_(t_LongitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeExtremumDetector_get__body(t_LongitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/BeidouMeo.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouMeo::class$ = NULL;
        jmethodID *BeidouMeo::mids$ = NULL;
        bool BeidouMeo::live$ = false;

        jclass BeidouMeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouMeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_be6476273154a2ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouMeo::BeidouMeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_be6476273154a2ce, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_BeidouMeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouMeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouMeo_init_(t_BeidouMeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouMeo__methods_[] = {
          DECLARE_METHOD(t_BeidouMeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouMeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouMeo)[] = {
          { Py_tp_methods, t_BeidouMeo__methods_ },
          { Py_tp_init, (void *) t_BeidouMeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouMeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouMeo, t_BeidouMeo, BeidouMeo);

        void t_BeidouMeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouMeo), &PY_TYPE_DEF(BeidouMeo), module, "BeidouMeo", 0);
        }

        void t_BeidouMeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "class_", make_descriptor(BeidouMeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "wrapfn_", make_descriptor(t_BeidouMeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouMeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouMeo::initializeClass, 1)))
            return NULL;
          return t_BeidouMeo::wrap_Object(BeidouMeo(((t_BeidouMeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouMeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouMeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouMeo_init_(t_BeidouMeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouMeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouMeo(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFixedStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFixedStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFixedStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractFixedStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFieldStep_d432811b42deb1dc] = env->getMethodID(cls, "getFieldStep", "(Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkStep_17db3a65980d3441] = env->getMethodID(cls, "checkStep", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_of_(t_AbstractFixedStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_get__parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFixedStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFixedStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFixedStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFixedStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFixedStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFixedStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFixedStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractFixedStepFieldIntegratorBuilder, t_AbstractFixedStepFieldIntegratorBuilder, AbstractFixedStepFieldIntegratorBuilder);
        PyObject *t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(const AbstractFixedStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFixedStepFieldIntegratorBuilder *self = (t_AbstractFixedStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFixedStepFieldIntegratorBuilder *self = (t_AbstractFixedStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFixedStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFixedStepFieldIntegratorBuilder), module, "AbstractFixedStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractFixedStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractFixedStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFixedStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(AbstractFixedStepFieldIntegratorBuilder(((t_AbstractFixedStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFixedStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_of_(t_AbstractFixedStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_get__parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
