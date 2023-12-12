#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmHeader::class$ = NULL;
              jmethodID *SsrIgmHeader::mids$ = NULL;
              bool SsrIgmHeader::live$ = false;

              jclass SsrIgmHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfSatellites_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_setNumberOfSatellites_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmHeader::SsrIgmHeader() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint SsrIgmHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_412668abc8d889e9]);
              }

              void SsrIgmHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_a3da1a935cb37f7b], a0);
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self);
              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg);
              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data);
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmHeader, numberOfSatellites),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmHeader__methods_[] = {
                DECLARE_METHOD(t_SsrIgmHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmHeader, setNumberOfSatellites, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmHeader)[] = {
                { Py_tp_methods, t_SsrIgmHeader__methods_ },
                { Py_tp_init, (void *) t_SsrIgmHeader_init_ },
                { Py_tp_getset, t_SsrIgmHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgmHeader, t_SsrIgmHeader, SsrIgmHeader);

              void t_SsrIgmHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmHeader), &PY_TYPE_DEF(SsrIgmHeader), module, "SsrIgmHeader", 0);
              }

              void t_SsrIgmHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "class_", make_descriptor(SsrIgmHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "wrapfn_", make_descriptor(t_SsrIgmHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmHeader::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmHeader::wrap_Object(SsrIgmHeader(((t_SsrIgmHeader *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmHeader object((jobject) NULL);

                INT_CALL(object = SsrIgmHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
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
#include "org/orekit/utils/units/Parser.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Parser::class$ = NULL;
        jmethodID *Parser::mids$ = NULL;
        bool Parser::live$ = false;

        jclass Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildTermsList_112f9b169ddc4fbe] = env->getStaticMethodID(cls, "buildTermsList", "(Ljava/lang/String;)Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List Parser::buildTermsList(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildTermsList_112f9b169ddc4fbe], a0.this$));
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
    namespace utils {
      namespace units {
        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_Parser__methods_[] = {
          DECLARE_METHOD(t_Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, buildTermsList, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Parser)[] = {
          { Py_tp_methods, t_Parser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Parser, t_Parser, Parser);

        void t_Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(Parser), &PY_TYPE_DEF(Parser), module, "Parser", 0);
        }

        void t_Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "class_", make_descriptor(Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "wrapfn_", make_descriptor(t_Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Parser::initializeClass, 1)))
            return NULL;
          return t_Parser::wrap_Object(Parser(((t_Parser *) arg)->object.this$));
        }
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Parser::buildTermsList(a0));
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(PowerTerm));
          }

          PyErr_SetArgsError(type, "buildTermsList", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldEquationsMapper::class$ = NULL;
      jmethodID *FieldEquationsMapper::mids$ = NULL;
      bool FieldEquationsMapper::live$ = false;

      jclass FieldEquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldEquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_2bfb9a29e7d7770a] = env->getMethodID(cls, "extractEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNumberOfEquations_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_412668abc8d889e9] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_270f73898b4ef6d7] = env->getMethodID(cls, "insertEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_mapStateAndDerivative_4a44960527a4a78a] = env->getMethodID(cls, "mapStateAndDerivative", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldEquationsMapper::extractEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractEquationData_2bfb9a29e7d7770a], a0, a1.this$));
      }

      jint FieldEquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_412668abc8d889e9]);
      }

      jint FieldEquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_412668abc8d889e9]);
      }

      void FieldEquationsMapper::insertEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_270f73898b4ef6d7], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldEquationsMapper::mapStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_4a44960527a4a78a], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data);
      static PyGetSetDef t_FieldEquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, totalDimension),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquationsMapper__methods_[] = {
        DECLARE_METHOD(t_FieldEquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquationsMapper)[] = {
        { Py_tp_methods, t_FieldEquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEquationsMapper, t_FieldEquationsMapper, FieldEquationsMapper);
      PyObject *t_FieldEquationsMapper::wrap_Object(const FieldEquationsMapper& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquationsMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquationsMapper), &PY_TYPE_DEF(FieldEquationsMapper), module, "FieldEquationsMapper", 0);
      }

      void t_FieldEquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "class_", make_descriptor(FieldEquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "wrapfn_", make_descriptor(t_FieldEquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquationsMapper::initializeClass, 1)))
          return NULL;
        return t_FieldEquationsMapper::wrap_Object(FieldEquationsMapper(((t_FieldEquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "I[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAdditionalStateProvider::class$ = NULL;
      jmethodID *FieldAdditionalStateProvider::mids$ = NULL;
      bool FieldAdditionalStateProvider::live$ = false;

      jclass FieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_00d4758be4cee3ce] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_yields_4fda3059ab91dbfe] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldAdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_00d4758be4cee3ce], a0.this$));
      }

      ::java::lang::String FieldAdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      void FieldAdditionalStateProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
      }

      jboolean FieldAdditionalStateProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_4fda3059ab91dbfe], a0.this$);
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
      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self);
      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data);
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_FieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, name),
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_FieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_FieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAdditionalStateProvider, t_FieldAdditionalStateProvider, FieldAdditionalStateProvider);
      PyObject *t_FieldAdditionalStateProvider::wrap_Object(const FieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAdditionalStateProvider), &PY_TYPE_DEF(FieldAdditionalStateProvider), module, "FieldAdditionalStateProvider", 0);
      }

      void t_FieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "class_", make_descriptor(FieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_FieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_FieldAdditionalStateProvider::wrap_Object(FieldAdditionalStateProvider(((t_FieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.yields(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yields", arg);
        return NULL;
      }
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data)
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
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *BDTScale::class$ = NULL;
      jmethodID *BDTScale::mids$ = NULL;
      bool BDTScale::live$ = false;

      jclass BDTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/BDTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String BDTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble BDTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement BDTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble BDTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String BDTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_BDTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BDTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BDTScale_getName(t_BDTScale *self);
      static PyObject *t_BDTScale_offsetFromTAI(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_offsetToTAI(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_toString(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_get__name(t_BDTScale *self, void *data);
      static PyGetSetDef t_BDTScale__fields_[] = {
        DECLARE_GET_FIELD(t_BDTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BDTScale__methods_[] = {
        DECLARE_METHOD(t_BDTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BDTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BDTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_BDTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_BDTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_BDTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BDTScale)[] = {
        { Py_tp_methods, t_BDTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BDTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BDTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BDTScale, t_BDTScale, BDTScale);

      void t_BDTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(BDTScale), &PY_TYPE_DEF(BDTScale), module, "BDTScale", 0);
      }

      void t_BDTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "class_", make_descriptor(BDTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "wrapfn_", make_descriptor(t_BDTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BDTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BDTScale::initializeClass, 1)))
          return NULL;
        return t_BDTScale::wrap_Object(BDTScale(((t_BDTScale *) arg)->object.this$));
      }
      static PyObject *t_BDTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BDTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BDTScale_getName(t_BDTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_BDTScale_offsetFromTAI(t_BDTScale *self, PyObject *args)
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

      static PyObject *t_BDTScale_offsetToTAI(t_BDTScale *self, PyObject *args)
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

      static PyObject *t_BDTScale_toString(t_BDTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BDTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BDTScale_get__name(t_BDTScale *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/PythonAbstractScheduler.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractScheduler::class$ = NULL;
          jmethodID *PythonAbstractScheduler::mids$ = NULL;
          bool PythonAbstractScheduler::live$ = false;

          jclass PythonAbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_abb76428109f399d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_measurementIsFeasible_981023bfa4a8a093] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractScheduler::PythonAbstractScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_abb76428109f399d, a0.this$, a1.this$)) {}

          void PythonAbstractScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractScheduler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args);
          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self);
          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args);
          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data);
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data);
          static PyGetSetDef t_PythonAbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, self),
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractScheduler)[] = {
            { Py_tp_methods, t_PythonAbstractScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractScheduler_init_ },
            { Py_tp_getset, t_PythonAbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(PythonAbstractScheduler, t_PythonAbstractScheduler, PythonAbstractScheduler);
          PyObject *t_PythonAbstractScheduler::wrap_Object(const PythonAbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractScheduler), &PY_TYPE_DEF(PythonAbstractScheduler), module, "PythonAbstractScheduler", 1);
          }

          void t_PythonAbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "class_", make_descriptor(PythonAbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "wrapfn_", make_descriptor(t_PythonAbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z", (void *) t_PythonAbstractScheduler_measurementIsFeasible0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractScheduler_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractScheduler::wrap_Object(PythonAbstractScheduler(((t_PythonAbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            PythonAbstractScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = PythonAbstractScheduler(a0, a1));
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

          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args)
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

          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "measurementIsFeasible", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("measurementIsFeasible", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data)
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
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data)
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
#include "org/orekit/files/ilrs/ILRSHeader.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *ILRSHeader::class$ = NULL;
        jmethodID *ILRSHeader::mids$ = NULL;
        bool ILRSHeader::live$ = false;

        jclass ILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/ILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEndEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEndEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFormat_3cffd47377eca18a] = env->getMethodID(cls, "getFormat", "()Ljava/lang/String;");
            mids$[mid_getIlrsSatelliteId_3cffd47377eca18a] = env->getMethodID(cls, "getIlrsSatelliteId", "()Ljava/lang/String;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNoradId_3cffd47377eca18a] = env->getMethodID(cls, "getNoradId", "()Ljava/lang/String;");
            mids$[mid_getProductionEpoch_ef81839d8717cc3a] = env->getMethodID(cls, "getProductionEpoch", "()Lorg/orekit/time/DateComponents;");
            mids$[mid_getProductionHour_412668abc8d889e9] = env->getMethodID(cls, "getProductionHour", "()I");
            mids$[mid_getSequenceNumber_412668abc8d889e9] = env->getMethodID(cls, "getSequenceNumber", "()I");
            mids$[mid_getSic_3cffd47377eca18a] = env->getMethodID(cls, "getSic", "()Ljava/lang/String;");
            mids$[mid_getStartEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getStartEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getTargetClass_412668abc8d889e9] = env->getMethodID(cls, "getTargetClass", "()I");
            mids$[mid_getTargetLocation_412668abc8d889e9] = env->getMethodID(cls, "getTargetLocation", "()I");
            mids$[mid_getVersion_412668abc8d889e9] = env->getMethodID(cls, "getVersion", "()I");
            mids$[mid_setEndEpoch_20affcbd28542333] = env->getMethodID(cls, "setEndEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setFormat_f5ffdf29129ef90a] = env->getMethodID(cls, "setFormat", "(Ljava/lang/String;)V");
            mids$[mid_setIlrsSatelliteId_f5ffdf29129ef90a] = env->getMethodID(cls, "setIlrsSatelliteId", "(Ljava/lang/String;)V");
            mids$[mid_setName_f5ffdf29129ef90a] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setNoradId_f5ffdf29129ef90a] = env->getMethodID(cls, "setNoradId", "(Ljava/lang/String;)V");
            mids$[mid_setProductionEpoch_4d2eb60c6d6ac3df] = env->getMethodID(cls, "setProductionEpoch", "(Lorg/orekit/time/DateComponents;)V");
            mids$[mid_setProductionHour_a3da1a935cb37f7b] = env->getMethodID(cls, "setProductionHour", "(I)V");
            mids$[mid_setSequenceNumber_a3da1a935cb37f7b] = env->getMethodID(cls, "setSequenceNumber", "(I)V");
            mids$[mid_setSic_f5ffdf29129ef90a] = env->getMethodID(cls, "setSic", "(Ljava/lang/String;)V");
            mids$[mid_setStartEpoch_20affcbd28542333] = env->getMethodID(cls, "setStartEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setTargetClass_a3da1a935cb37f7b] = env->getMethodID(cls, "setTargetClass", "(I)V");
            mids$[mid_setTargetLocation_a3da1a935cb37f7b] = env->getMethodID(cls, "setTargetLocation", "(I)V");
            mids$[mid_setVersion_a3da1a935cb37f7b] = env->getMethodID(cls, "setVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ILRSHeader::ILRSHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::time::AbsoluteDate ILRSHeader::getEndEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndEpoch_7a97f7e149e79afb]));
        }

        ::java::lang::String ILRSHeader::getFormat() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormat_3cffd47377eca18a]));
        }

        ::java::lang::String ILRSHeader::getIlrsSatelliteId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIlrsSatelliteId_3cffd47377eca18a]));
        }

        ::java::lang::String ILRSHeader::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        ::java::lang::String ILRSHeader::getNoradId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNoradId_3cffd47377eca18a]));
        }

        ::org::orekit::time::DateComponents ILRSHeader::getProductionEpoch() const
        {
          return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getProductionEpoch_ef81839d8717cc3a]));
        }

        jint ILRSHeader::getProductionHour() const
        {
          return env->callIntMethod(this$, mids$[mid_getProductionHour_412668abc8d889e9]);
        }

        jint ILRSHeader::getSequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSequenceNumber_412668abc8d889e9]);
        }

        ::java::lang::String ILRSHeader::getSic() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSic_3cffd47377eca18a]));
        }

        ::org::orekit::time::AbsoluteDate ILRSHeader::getStartEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartEpoch_7a97f7e149e79afb]));
        }

        jint ILRSHeader::getTargetClass() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetClass_412668abc8d889e9]);
        }

        jint ILRSHeader::getTargetLocation() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetLocation_412668abc8d889e9]);
        }

        jint ILRSHeader::getVersion() const
        {
          return env->callIntMethod(this$, mids$[mid_getVersion_412668abc8d889e9]);
        }

        void ILRSHeader::setEndEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEndEpoch_20affcbd28542333], a0.this$);
        }

        void ILRSHeader::setFormat(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFormat_f5ffdf29129ef90a], a0.this$);
        }

        void ILRSHeader::setIlrsSatelliteId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIlrsSatelliteId_f5ffdf29129ef90a], a0.this$);
        }

        void ILRSHeader::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_f5ffdf29129ef90a], a0.this$);
        }

        void ILRSHeader::setNoradId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoradId_f5ffdf29129ef90a], a0.this$);
        }

        void ILRSHeader::setProductionEpoch(const ::org::orekit::time::DateComponents & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionEpoch_4d2eb60c6d6ac3df], a0.this$);
        }

        void ILRSHeader::setProductionHour(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionHour_a3da1a935cb37f7b], a0);
        }

        void ILRSHeader::setSequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSequenceNumber_a3da1a935cb37f7b], a0);
        }

        void ILRSHeader::setSic(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSic_f5ffdf29129ef90a], a0.this$);
        }

        void ILRSHeader::setStartEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStartEpoch_20affcbd28542333], a0.this$);
        }

        void ILRSHeader::setTargetClass(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetClass_a3da1a935cb37f7b], a0);
        }

        void ILRSHeader::setTargetLocation(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetLocation_a3da1a935cb37f7b], a0);
        }

        void ILRSHeader::setVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_a3da1a935cb37f7b], a0);
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
        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_ILRSHeader__fields_[] = {
          DECLARE_GETSET_FIELD(t_ILRSHeader, endEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, format),
          DECLARE_GETSET_FIELD(t_ILRSHeader, ilrsSatelliteId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, name),
          DECLARE_GETSET_FIELD(t_ILRSHeader, noradId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionHour),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sequenceNumber),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sic),
          DECLARE_GETSET_FIELD(t_ILRSHeader, startEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetClass),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetLocation),
          DECLARE_GETSET_FIELD(t_ILRSHeader, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ILRSHeader__methods_[] = {
          DECLARE_METHOD(t_ILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, getEndEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getFormat, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getIlrsSatelliteId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getName, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getNoradId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionHour, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSic, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getStartEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetClass, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetLocation, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, setEndEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setFormat, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setIlrsSatelliteId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setName, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setNoradId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionHour, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSequenceNumber, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSic, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setStartEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetClass, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetLocation, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ILRSHeader)[] = {
          { Py_tp_methods, t_ILRSHeader__methods_ },
          { Py_tp_init, (void *) t_ILRSHeader_init_ },
          { Py_tp_getset, t_ILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ILRSHeader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ILRSHeader, t_ILRSHeader, ILRSHeader);

        void t_ILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(ILRSHeader), &PY_TYPE_DEF(ILRSHeader), module, "ILRSHeader", 0);
        }

        void t_ILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "class_", make_descriptor(ILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "wrapfn_", make_descriptor(t_ILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ILRSHeader::initializeClass, 1)))
            return NULL;
          return t_ILRSHeader::wrap_Object(ILRSHeader(((t_ILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          ILRSHeader object((jobject) NULL);

          INT_CALL(object = ILRSHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFormat());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIlrsSatelliteId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getNoradId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::DateComponents result((jobject) NULL);
          OBJ_CALL(result = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getProductionHour());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSic());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetClass());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetLocation());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getVersion());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEndEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEndEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFormat(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFormat", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setIlrsSatelliteId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIlrsSatelliteId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setName", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setNoradId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoradId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::DateComponents a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setProductionEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setProductionHour(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionHour", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSic(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSic", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setStartEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStartEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetClass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetClass", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetLocation(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetLocation", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEndEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "endEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFormat());
          return j2p(value);
        }
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFormat(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "format", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIlrsSatelliteId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setIlrsSatelliteId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ilrsSatelliteId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "name", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getNoradId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setNoradId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noradId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          OBJ_CALL(value = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(value);
        }
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::DateComponents value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
            {
              INT_CALL(self->object.setProductionEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getProductionHour());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setProductionHour(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionHour", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sequenceNumber", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSic());
          return j2p(value);
        }
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSic(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sic", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setStartEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "startEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetClass());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetClass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetClass", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetLocation());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetLocation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetLocation", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getVersion());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfano2005::class$ = NULL;
              jmethodID *Alfano2005::mids$ = NULL;
              bool Alfano2005::live$ = false;

              jclass Alfano2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfano2005::Alfano2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Alfano2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddf22cd33bfe153c], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Alfano2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8d09da96ce925a0b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfano2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_4b8bf2bb84f7480e]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_Alfano2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfano2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfano2005_init_(t_Alfano2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfano2005_compute(t_Alfano2005 *self, PyObject *args);
              static PyObject *t_Alfano2005_getType(t_Alfano2005 *self, PyObject *args);
              static PyObject *t_Alfano2005_get__type(t_Alfano2005 *self, void *data);
              static PyGetSetDef t_Alfano2005__fields_[] = {
                DECLARE_GET_FIELD(t_Alfano2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfano2005__methods_[] = {
                DECLARE_METHOD(t_Alfano2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfano2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfano2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Alfano2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfano2005)[] = {
                { Py_tp_methods, t_Alfano2005__methods_ },
                { Py_tp_init, (void *) t_Alfano2005_init_ },
                { Py_tp_getset, t_Alfano2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfano2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Alfano2005, t_Alfano2005, Alfano2005);

              void t_Alfano2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfano2005), &PY_TYPE_DEF(Alfano2005), module, "Alfano2005", 0);
              }

              void t_Alfano2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "class_", make_descriptor(Alfano2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "wrapfn_", make_descriptor(t_Alfano2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfano2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfano2005::initializeClass, 1)))
                  return NULL;
                return t_Alfano2005::wrap_Object(Alfano2005(((t_Alfano2005 *) arg)->object.this$));
              }
              static PyObject *t_Alfano2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfano2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfano2005_init_(t_Alfano2005 *self, PyObject *args, PyObject *kwds)
              {
                Alfano2005 object((jobject) NULL);

                INT_CALL(object = Alfano2005());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfano2005_compute(t_Alfano2005 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Alfano2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Alfano2005_getType(t_Alfano2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfano2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfano2005_get__type(t_Alfano2005 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientField::class$ = NULL;
        jmethodID *GradientField::mids$ = NULL;
        bool GradientField::live$ = false;

        jclass GradientField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_52406fde95ba4c75] = env->getStaticMethodID(cls, "getField", "(I)Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getOne_b157bc83ac48b3b3] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_b157bc83ac48b3b3] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean GradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        GradientField GradientField::getField(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_52406fde95ba4c75], a0));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getOne_b157bc83ac48b3b3]));
        }

        ::java::lang::Class GradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getZero_b157bc83ac48b3b3]));
        }

        jint GradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_getOne(t_GradientField *self);
        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self);
        static PyObject *t_GradientField_getZero(t_GradientField *self);
        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data);
        static PyGetSetDef t_GradientField__fields_[] = {
          DECLARE_GET_FIELD(t_GradientField, one),
          DECLARE_GET_FIELD(t_GradientField, runtimeClass),
          DECLARE_GET_FIELD(t_GradientField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GradientField__methods_[] = {
          DECLARE_METHOD(t_GradientField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, equals, METH_VARARGS),
          DECLARE_METHOD(t_GradientField, getField, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientField)[] = {
          { Py_tp_methods, t_GradientField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GradientField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientField, t_GradientField, GradientField);

        void t_GradientField::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientField), &PY_TYPE_DEF(GradientField), module, "GradientField", 0);
        }

        void t_GradientField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "class_", make_descriptor(GradientField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "wrapfn_", make_descriptor(t_GradientField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientField::initializeClass, 1)))
            return NULL;
          return t_GradientField::wrap_Object(GradientField(((t_GradientField *) arg)->object.this$));
        }
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          GradientField result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::GradientField::getField(a0));
            return t_GradientField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", arg);
          return NULL;
        }

        static PyObject *t_GradientField_getOne(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GradientField_getZero(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap::mids$ = NULL;
      bool OpenIntToDoubleHashMap::live$ = false;

      jclass OpenIntToDoubleHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_containsKey_e034cac2b514bb09] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_69cfb132c661aca4] = env->getMethodID(cls, "get", "(I)D");
          mids$[mid_iterator_3909216f0040655d] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToDoubleHashMap$Iterator;");
          mids$[mid_put_77f9e227e4cf04b4] = env->getMethodID(cls, "put", "(ID)D");
          mids$[mid_remove_69cfb132c661aca4] = env->getMethodID(cls, "remove", "(I)D");
          mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

      jboolean OpenIntToDoubleHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_e034cac2b514bb09], a0);
      }

      jdouble OpenIntToDoubleHashMap::get$(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_get_69cfb132c661aca4], a0);
      }

      ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator OpenIntToDoubleHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_3909216f0040655d]));
      }

      jdouble OpenIntToDoubleHashMap::put(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_put_77f9e227e4cf04b4], a0, a1);
      }

      jdouble OpenIntToDoubleHashMap::remove(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_remove_69cfb132c661aca4], a0);
      }

      jint OpenIntToDoubleHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self);
      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self);

      static PyMethodDef t_OpenIntToDoubleHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToDoubleHashMap_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap, t_OpenIntToDoubleHashMap, OpenIntToDoubleHashMap);

      void t_OpenIntToDoubleHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap), &PY_TYPE_DEF(OpenIntToDoubleHashMap), module, "OpenIntToDoubleHashMap", 0);
      }

      void t_OpenIntToDoubleHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "class_", make_descriptor(OpenIntToDoubleHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap::wrap_Object(OpenIntToDoubleHashMap(((t_OpenIntToDoubleHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenIntToDoubleHashMap object((jobject) NULL);

            INT_CALL(object = OpenIntToDoubleHashMap());
            self->object = object;
            break;
          }
         case 1:
          {
            jdouble a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0, a1));
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

      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToDoubleHashMap$Iterator::wrap_Object(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthFieldIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegrator::mids$ = NULL;
        bool AdamsBashforthFieldIntegrator::live$ = false;

        jclass AdamsBashforthFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_98a8f681a3661186] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_9d3b83c0c1b3a514] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_1fb9f4eb0e32bdff] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_a39c6521f8e99c62] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_98a8f681a3661186, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_9d3b83c0c1b3a514, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegrator, t_AdamsBashforthFieldIntegrator, AdamsBashforthFieldIntegrator);
        PyObject *t_AdamsBashforthFieldIntegrator::wrap_Object(const AdamsBashforthFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegrator), &PY_TYPE_DEF(AdamsBashforthFieldIntegrator), module, "AdamsBashforthFieldIntegrator", 0);
        }

        void t_AdamsBashforthFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "class_", make_descriptor(AdamsBashforthFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegrator::wrap_Object(AdamsBashforthFieldIntegrator(((t_AdamsBashforthFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/util/SortedSet.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d5799c4b988fa7a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_914ef2e902d54760] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_c6b6a992db588a51] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_d5799c4b988fa7a5, a0.this$)) {}

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_914ef2e902d54760, a0.this$, a1.this$)) {}

            ::java::util::SortedSet MarshallSolarActivityFutureEstimationLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_c6b6a992db588a51]));
            }

            void MarshallSolarActivityFutureEstimationLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, dataSet),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimationLoader_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader, t_MarshallSolarActivityFutureEstimationLoader, MarshallSolarActivityFutureEstimationLoader);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(const MarshallSolarActivityFutureEstimationLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader), module, "MarshallSolarActivityFutureEstimationLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters)));
            }

            void t_MarshallSolarActivityFutureEstimationLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(MarshallSolarActivityFutureEstimationLoader(((t_MarshallSolarActivityFutureEstimationLoader *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "Kk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a1))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
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

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters));
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *Acm::class$ = NULL;
              jmethodID *Acm::mids$ = NULL;
              bool Acm::live$ = false;
              ::java::lang::String *Acm::ATT_LINE = NULL;
              ::java::lang::String *Acm::COV_LINE = NULL;
              ::java::lang::String *Acm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Acm::ROOT = NULL;
              ::java::lang::String *Acm::UNKNOWN_OBJECT = NULL;

              jclass Acm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/Acm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f4c63464eb8f0477] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getData_81e808cfcd4865bd] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmData;");
                  mids$[mid_getMetadata_a46adf9d544d27b7] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;");
                  mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "ATT_LINE", "Ljava/lang/String;"));
                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Acm::Acm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_f4c63464eb8f0477, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmData Acm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmData(env->callObjectMethod(this$, mids$[mid_getData_81e808cfcd4865bd]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata Acm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_a46adf9d544d27b7]));
              }

              ::java::util::Map Acm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
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
          namespace adm {
            namespace acm {
              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args);
              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Acm_getData(t_Acm *self);
              static PyObject *t_Acm_getMetadata(t_Acm *self);
              static PyObject *t_Acm_getSatellites(t_Acm *self);
              static PyObject *t_Acm_get__data(t_Acm *self, void *data);
              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data);
              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data);
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data);
              static PyGetSetDef t_Acm__fields_[] = {
                DECLARE_GET_FIELD(t_Acm, data),
                DECLARE_GET_FIELD(t_Acm, metadata),
                DECLARE_GET_FIELD(t_Acm, satellites),
                DECLARE_GET_FIELD(t_Acm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Acm__methods_[] = {
                DECLARE_METHOD(t_Acm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Acm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Acm)[] = {
                { Py_tp_methods, t_Acm__methods_ },
                { Py_tp_init, (void *) t_Acm_init_ },
                { Py_tp_getset, t_Acm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Acm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Acm, t_Acm, Acm);
              PyObject *t_Acm::wrap_Object(const Acm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Acm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Acm::install(PyObject *module)
              {
                installType(&PY_TYPE(Acm), &PY_TYPE_DEF(Acm), module, "Acm", 0);
              }

              void t_Acm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "class_", make_descriptor(Acm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "wrapfn_", make_descriptor(t_Acm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Acm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ATT_LINE", make_descriptor(j2p(*Acm::ATT_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "COV_LINE", make_descriptor(j2p(*Acm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Acm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ROOT", make_descriptor(j2p(*Acm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Acm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Acm::initializeClass, 1)))
                  return NULL;
                return t_Acm::wrap_Object(Acm(((t_Acm *) arg)->object.this$));
              }
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Acm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Acm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Acm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Acm_getData(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(result);
              }

              static PyObject *t_Acm_getMetadata(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Acm_getSatellites(t_Acm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmSatelliteEphemeris));
              }
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Acm_get__data(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(value);
              }

              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$Split::class$ = NULL;
          jmethodID *ArcsSet$Split::mids$ = NULL;
          bool ArcsSet$Split::live$ = false;

          jclass ArcsSet$Split::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$Split");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMinus_75597f9ad249cb08] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getPlus_75597f9ad249cb08] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getSide_65bf13475edb2de9] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getMinus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getMinus_75597f9ad249cb08]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getPlus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getPlus_75597f9ad249cb08]));
          }

          ::org::hipparchus::geometry::partitioning::Side ArcsSet$Split::getSide() const
          {
            return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_65bf13475edb2de9]));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args);
          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data);
          static PyGetSetDef t_ArcsSet$Split__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$Split, minus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, plus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, side),
            DECLARE_GET_FIELD(t_ArcsSet$Split, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$Split__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$Split, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getMinus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getPlus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getSide, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$Split)[] = {
            { Py_tp_methods, t_ArcsSet$Split__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ArcsSet$Split__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$Split)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ArcsSet$Split, t_ArcsSet$Split, ArcsSet$Split);
          PyObject *t_ArcsSet$Split::wrap_Object(const ArcsSet$Split& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$Split::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$Split::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$Split), &PY_TYPE_DEF(ArcsSet$Split), module, "ArcsSet$Split", 0);
          }

          void t_ArcsSet$Split::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "class_", make_descriptor(ArcsSet$Split::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "wrapfn_", make_descriptor(t_ArcsSet$Split::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$Split::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$Split::wrap_Object(ArcsSet$Split(((t_ArcsSet$Split *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$Split::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
            OBJ_CALL(result = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
          }
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
            OBJ_CALL(value = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *Action::class$ = NULL;
        jmethodID *Action::mids$ = NULL;
        bool Action::live$ = false;
        Action *Action::CONTINUE = NULL;
        Action *Action::RESET_DERIVATIVES = NULL;
        Action *Action::RESET_EVENTS = NULL;
        Action *Action::RESET_STATE = NULL;
        Action *Action::STOP = NULL;

        jclass Action::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/Action");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_d4807f4620e23a07] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_values_e3d2cb5c972231f4] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CONTINUE = new Action(env->getStaticObjectField(cls, "CONTINUE", "Lorg/hipparchus/ode/events/Action;"));
            RESET_DERIVATIVES = new Action(env->getStaticObjectField(cls, "RESET_DERIVATIVES", "Lorg/hipparchus/ode/events/Action;"));
            RESET_EVENTS = new Action(env->getStaticObjectField(cls, "RESET_EVENTS", "Lorg/hipparchus/ode/events/Action;"));
            RESET_STATE = new Action(env->getStaticObjectField(cls, "RESET_STATE", "Lorg/hipparchus/ode/events/Action;"));
            STOP = new Action(env->getStaticObjectField(cls, "STOP", "Lorg/hipparchus/ode/events/Action;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Action Action::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Action(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d4807f4620e23a07], a0.this$));
        }

        JArray< Action > Action::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Action >(env->callStaticObjectMethod(cls, mids$[mid_values_e3d2cb5c972231f4]));
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
      namespace events {
        static PyObject *t_Action_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Action_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Action_of_(t_Action *self, PyObject *args);
        static PyObject *t_Action_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Action_values(PyTypeObject *type);
        static PyObject *t_Action_get__parameters_(t_Action *self, void *data);
        static PyGetSetDef t_Action__fields_[] = {
          DECLARE_GET_FIELD(t_Action, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Action__methods_[] = {
          DECLARE_METHOD(t_Action, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Action, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Action, of_, METH_VARARGS),
          DECLARE_METHOD(t_Action, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Action, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Action)[] = {
          { Py_tp_methods, t_Action__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Action__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Action)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Action, t_Action, Action);
        PyObject *t_Action::wrap_Object(const Action& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Action::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Action *self = (t_Action *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Action::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Action::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Action *self = (t_Action *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Action::install(PyObject *module)
        {
          installType(&PY_TYPE(Action), &PY_TYPE_DEF(Action), module, "Action", 0);
        }

        void t_Action::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "class_", make_descriptor(Action::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "wrapfn_", make_descriptor(t_Action::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "boxfn_", make_descriptor(boxObject));
          env->getClass(Action::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "CONTINUE", make_descriptor(t_Action::wrap_Object(*Action::CONTINUE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_DERIVATIVES", make_descriptor(t_Action::wrap_Object(*Action::RESET_DERIVATIVES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_EVENTS", make_descriptor(t_Action::wrap_Object(*Action::RESET_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_STATE", make_descriptor(t_Action::wrap_Object(*Action::RESET_STATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "STOP", make_descriptor(t_Action::wrap_Object(*Action::STOP)));
        }

        static PyObject *t_Action_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Action::initializeClass, 1)))
            return NULL;
          return t_Action::wrap_Object(Action(((t_Action *) arg)->object.this$));
        }
        static PyObject *t_Action_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Action::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Action_of_(t_Action *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Action_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Action result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::Action::valueOf(a0));
            return t_Action::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Action_values(PyTypeObject *type)
        {
          JArray< Action > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::Action::values());
          return JArray<jobject>(result.this$).wrap(t_Action::wrap_jobject);
        }
        static PyObject *t_Action_get__parameters_(t_Action *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractEphemerisMessage::class$ = NULL;
            jmethodID *AbstractEphemerisMessage::mids$ = NULL;
            bool AbstractEphemerisMessage::live$ = false;

            jclass AbstractEphemerisMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEpochToc_7a97f7e149e79afb] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getHealth_557b8123390d8d0c] = env->getMethodID(cls, "getHealth", "()D");
                mids$[mid_getPRN_412668abc8d889e9] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_557b8123390d8d0c] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_setDate_20affcbd28542333] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setEpochToc_20affcbd28542333] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setHealth_10f281d777284cea] = env->getMethodID(cls, "setHealth", "(D)V");
                mids$[mid_setPRN_a3da1a935cb37f7b] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setX_10f281d777284cea] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXDot_10f281d777284cea] = env->getMethodID(cls, "setXDot", "(D)V");
                mids$[mid_setXDotDot_10f281d777284cea] = env->getMethodID(cls, "setXDotDot", "(D)V");
                mids$[mid_setY_10f281d777284cea] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYDot_10f281d777284cea] = env->getMethodID(cls, "setYDot", "(D)V");
                mids$[mid_setYDotDot_10f281d777284cea] = env->getMethodID(cls, "setYDotDot", "(D)V");
                mids$[mid_setZ_10f281d777284cea] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZDot_10f281d777284cea] = env->getMethodID(cls, "setZDot", "(D)V");
                mids$[mid_setZDotDot_10f281d777284cea] = env->getMethodID(cls, "setZDotDot", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEphemerisMessage::AbstractEphemerisMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_7a97f7e149e79afb]));
            }

            jdouble AbstractEphemerisMessage::getHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHealth_557b8123390d8d0c]);
            }

            jint AbstractEphemerisMessage::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_412668abc8d889e9]);
            }

            jdouble AbstractEphemerisMessage::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
            }

            jdouble AbstractEphemerisMessage::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_557b8123390d8d0c]);
            }

            jdouble AbstractEphemerisMessage::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_557b8123390d8d0c]);
            }

            jdouble AbstractEphemerisMessage::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
            }

            jdouble AbstractEphemerisMessage::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_557b8123390d8d0c]);
            }

            jdouble AbstractEphemerisMessage::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_557b8123390d8d0c]);
            }

            jdouble AbstractEphemerisMessage::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_557b8123390d8d0c]);
            }

            jdouble AbstractEphemerisMessage::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_557b8123390d8d0c]);
            }

            jdouble AbstractEphemerisMessage::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_557b8123390d8d0c]);
            }

            void AbstractEphemerisMessage::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_20affcbd28542333], a0.this$);
            }

            void AbstractEphemerisMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_20affcbd28542333], a0.this$);
            }

            void AbstractEphemerisMessage::setHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_a3da1a935cb37f7b], a0);
            }

            void AbstractEphemerisMessage::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setXDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDot_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setXDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDotDot_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setYDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDot_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setYDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDotDot_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setZDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDot_10f281d777284cea], a0);
            }

            void AbstractEphemerisMessage::setZDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDotDot_10f281d777284cea], a0);
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
            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractEphemerisMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, date),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, health),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, pRN),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, x),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, y),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, z),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEphemerisMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractEphemerisMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getX, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getY, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZ, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setDate, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setHealth, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setPRN, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setX, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setY, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZ, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDotDot, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEphemerisMessage)[] = {
              { Py_tp_methods, t_AbstractEphemerisMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractEphemerisMessage_init_ },
              { Py_tp_getset, t_AbstractEphemerisMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEphemerisMessage)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEphemerisMessage, t_AbstractEphemerisMessage, AbstractEphemerisMessage);

            void t_AbstractEphemerisMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEphemerisMessage), &PY_TYPE_DEF(AbstractEphemerisMessage), module, "AbstractEphemerisMessage", 0);
            }

            void t_AbstractEphemerisMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "class_", make_descriptor(AbstractEphemerisMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "wrapfn_", make_descriptor(t_AbstractEphemerisMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEphemerisMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractEphemerisMessage::wrap_Object(AbstractEphemerisMessage(((t_AbstractEphemerisMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEphemerisMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds)
            {
              AbstractEphemerisMessage object((jobject) NULL);

              INT_CALL(object = AbstractEphemerisMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg)
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

            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg)
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

            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDotDot", arg);
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
#include "org/hipparchus/analysis/function/Logistic.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic::class$ = NULL;
        jmethodID *Logistic::mids$ = NULL;
        bool Logistic::live$ = false;

        jclass Logistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3869a36d565fbc00] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic::Logistic(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3869a36d565fbc00, a0, a1, a2, a3, a4, a5)) {}

        jdouble Logistic::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logistic::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args);

        static PyMethodDef t_Logistic__methods_[] = {
          DECLARE_METHOD(t_Logistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic)[] = {
          { Py_tp_methods, t_Logistic__methods_ },
          { Py_tp_init, (void *) t_Logistic_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic, t_Logistic, Logistic);

        void t_Logistic::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic), &PY_TYPE_DEF(Logistic), module, "Logistic", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "Parametric", make_descriptor(&PY_TYPE_DEF(Logistic$Parametric)));
        }

        void t_Logistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "class_", make_descriptor(Logistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "wrapfn_", make_descriptor(t_Logistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic::initializeClass, 1)))
            return NULL;
          return t_Logistic::wrap_Object(Logistic(((t_Logistic *) arg)->object.this$));
        }
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          Logistic object((jobject) NULL);

          if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Logistic(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PhaseCenterVariationFunction::mids$ = NULL;
        bool PhaseCenterVariationFunction::live$ = false;

        jclass PhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble PhaseCenterVariationFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
      namespace antenna {
        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args);

        static PyMethodDef t_PhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PhaseCenterVariationFunction, t_PhaseCenterVariationFunction, PhaseCenterVariationFunction);

        void t_PhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PhaseCenterVariationFunction), &PY_TYPE_DEF(PhaseCenterVariationFunction), module, "PhaseCenterVariationFunction", 0);
        }

        void t_PhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "class_", make_descriptor(PhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PhaseCenterVariationFunction::wrap_Object(PhaseCenterVariationFunction(((t_PhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args)
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
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2::mids$ = NULL;
        bool FieldUnivariateDerivative2::live$ = false;

        jclass FieldUnivariateDerivative2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d88ba13dc070d10b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_0f27b0249abd6c51] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_aee8d6ce5ed6f574] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acos_aee8d6ce5ed6f574] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acosh_aee8d6ce5ed6f574] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_314c5ab19b1e7ee5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_92101798ac001de6] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_e0a1ae46064e5a41] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asin_aee8d6ce5ed6f574] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asinh_aee8d6ce5ed6f574] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan_aee8d6ce5ed6f574] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan2_314c5ab19b1e7ee5] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atanh_aee8d6ce5ed6f574] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cbrt_aee8d6ce5ed6f574] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ceil_aee8d6ce5ed6f574] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_compose_802068f56603b9b2] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_314c5ab19b1e7ee5] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_92101798ac001de6] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_e0a1ae46064e5a41] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cos_aee8d6ce5ed6f574] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cosh_aee8d6ce5ed6f574] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_314c5ab19b1e7ee5] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_92101798ac001de6] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_e0a1ae46064e5a41] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_aee8d6ce5ed6f574] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_expm1_aee8d6ce5ed6f574] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_floor_aee8d6ce5ed6f574] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getDerivative_8b3a1c735adfa4bc] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_e7e796782f17a108] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_613c8f46c659f636] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_aee8d6ce5ed6f574] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_613c8f46c659f636] = env->getMethodID(cls, "getSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_613c8f46c659f636] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_20f98801541dcec1] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_314c5ab19b1e7ee5] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_5881f7f3a7d1887f] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_e85b6771a62ebdf8] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_1c1a89706e9f46c3] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_f6763c61c4dbc8d4] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_206a7fc8be0b44c9] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_2b97b8f02dd7b992] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_9314ade1d8d4a522] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_c38db2770d48e38e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_4fd80d02815c1f73] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_709b88ebdf414417] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log_aee8d6ce5ed6f574] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log10_aee8d6ce5ed6f574] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log1p_aee8d6ce5ed6f574] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_314c5ab19b1e7ee5] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_92101798ac001de6] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_e936ba5bd5ff4ffc] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_e0a1ae46064e5a41] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_negate_aee8d6ce5ed6f574] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_newInstance_92101798ac001de6] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_314c5ab19b1e7ee5] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_92101798ac001de6] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_e936ba5bd5ff4ffc] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_0607be742b1e7f69] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_reciprocal_aee8d6ce5ed6f574] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_314c5ab19b1e7ee5] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_92101798ac001de6] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_e0a1ae46064e5a41] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rint_aee8d6ce5ed6f574] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rootN_e936ba5bd5ff4ffc] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_scalb_e936ba5bd5ff4ffc] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sign_aee8d6ce5ed6f574] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sin_aee8d6ce5ed6f574] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_aee8d6ce5ed6f574] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_aee8d6ce5ed6f574] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_314c5ab19b1e7ee5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_92101798ac001de6] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_e0a1ae46064e5a41] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tan_aee8d6ce5ed6f574] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tanh_aee8d6ce5ed6f574] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_taylor_94d37e81a3238af8] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_6672ad854985cb64] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_aee8d6ce5ed6f574] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_5997f22f8d76210e] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_aee8d6ce5ed6f574] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ulp_aee8d6ce5ed6f574] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d88ba13dc070d10b, a0.this$)) {}

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_0f27b0249abd6c51, a0.this$, a1.this$, a2.this$)) {}

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::abs() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_92101798ac001de6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_e0a1ae46064e5a41], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan2(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cbrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ceil() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_802068f56603b9b2], a0.this$, a1.this$, a2.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_92101798ac001de6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_e0a1ae46064e5a41], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_92101798ac001de6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_e0a1ae46064e5a41], a0.this$));
        }

        jboolean FieldUnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::exp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::expm1() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::floor() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_aee8d6ce5ed6f574]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_8b3a1c735adfa4bc], a0));
        }

        jint FieldUnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field FieldUnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_e7e796782f17a108]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_613c8f46c659f636]));
        }

        jint FieldUnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::getPi() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_aee8d6ce5ed6f574]));
        }

        jdouble FieldUnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getSecondDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSecondDerivative_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_613c8f46c659f636]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative2::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_20f98801541dcec1]));
        }

        jint FieldUnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::hypot(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_5881f7f3a7d1887f], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_e85b6771a62ebdf8], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< FieldUnivariateDerivative2 > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_1c1a89706e9f46c3], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_f6763c61c4dbc8d4], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_206a7fc8be0b44c9], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_2b97b8f02dd7b992], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_9314ade1d8d4a522], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative2 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative2 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_c38db2770d48e38e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5, const FieldUnivariateDerivative2 & a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_4fd80d02815c1f73], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5, jdouble a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_709b88ebdf414417], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log10() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log1p() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_92101798ac001de6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_e936ba5bd5ff4ffc], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_e0a1ae46064e5a41], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::negate() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_92101798ac001de6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_92101798ac001de6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_e936ba5bd5ff4ffc], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0, const FieldUnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_0607be742b1e7f69], a0, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::reciprocal() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_92101798ac001de6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_e0a1ae46064e5a41], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rint() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rootN(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_e936ba5bd5ff4ffc], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::scalb(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_e936ba5bd5ff4ffc], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sign() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_aee8d6ce5ed6f574]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_aee8d6ce5ed6f574]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sqrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_314c5ab19b1e7ee5], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_92101798ac001de6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_e0a1ae46064e5a41], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_aee8d6ce5ed6f574]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_94d37e81a3238af8], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_6672ad854985cb64], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toDegrees() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_aee8d6ce5ed6f574]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_5997f22f8d76210e]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toRadians() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_aee8d6ce5ed6f574]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ulp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_aee8d6ce5ed6f574]));
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
        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, secondDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getSecondDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative2_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2, t_FieldUnivariateDerivative2, FieldUnivariateDerivative2);
        PyObject *t_FieldUnivariateDerivative2::wrap_Object(const FieldUnivariateDerivative2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2), &PY_TYPE_DEF(FieldUnivariateDerivative2), module, "FieldUnivariateDerivative2", 0);
        }

        void t_FieldUnivariateDerivative2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "class_", make_descriptor(FieldUnivariateDerivative2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2::wrap_Object(FieldUnivariateDerivative2(((t_FieldUnivariateDerivative2 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0, a1, a2));
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

        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1, a2));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative2 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &p6, t_FieldUnivariateDerivative2::parameters_, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2::pow(a0, a1));
            return t_FieldUnivariateDerivative2::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data)
        {
          FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince54IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54IntegratorBuilder::mids$ = NULL;
        bool DormandPrince54IntegratorBuilder::live$ = false;

        jclass DormandPrince54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54IntegratorBuilder::DormandPrince54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
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
        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince54IntegratorBuilder, t_DormandPrince54IntegratorBuilder, DormandPrince54IntegratorBuilder);

        void t_DormandPrince54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54IntegratorBuilder), &PY_TYPE_DEF(DormandPrince54IntegratorBuilder), module, "DormandPrince54IntegratorBuilder", 0);
        }

        void t_DormandPrince54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "class_", make_descriptor(DormandPrince54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54IntegratorBuilder::wrap_Object(DormandPrince54IntegratorBuilder(((t_DormandPrince54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/File.h"
#include "java/io/IOException.h"
#include "java/io/FileFilter.h"
#include "java/io/Serializable.h"
#include "java/io/File.h"
#include "java/io/FilenameFilter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *File::class$ = NULL;
    jmethodID *File::mids$ = NULL;
    bool File::live$ = false;
    ::java::lang::String *File::pathSeparator = NULL;
    jchar File::pathSeparatorChar = (jchar) 0;
    ::java::lang::String *File::separator = NULL;
    jchar File::separatorChar = (jchar) 0;

    jclass File::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/File");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7a5b31fafc364859] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_canExecute_89b302893bdbe1f1] = env->getMethodID(cls, "canExecute", "()Z");
        mids$[mid_canRead_89b302893bdbe1f1] = env->getMethodID(cls, "canRead", "()Z");
        mids$[mid_canWrite_89b302893bdbe1f1] = env->getMethodID(cls, "canWrite", "()Z");
        mids$[mid_compareTo_562bb2f6e6ce4c78] = env->getMethodID(cls, "compareTo", "(Ljava/io/File;)I");
        mids$[mid_createNewFile_89b302893bdbe1f1] = env->getMethodID(cls, "createNewFile", "()Z");
        mids$[mid_createTempFile_b4bb821705556510] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;");
        mids$[mid_createTempFile_847f643c3593d002] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;");
        mids$[mid_delete_89b302893bdbe1f1] = env->getMethodID(cls, "delete", "()Z");
        mids$[mid_deleteOnExit_0640e6acf969ed28] = env->getMethodID(cls, "deleteOnExit", "()V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_exists_89b302893bdbe1f1] = env->getMethodID(cls, "exists", "()Z");
        mids$[mid_getAbsoluteFile_7fba3d9d6a9eec51] = env->getMethodID(cls, "getAbsoluteFile", "()Ljava/io/File;");
        mids$[mid_getAbsolutePath_3cffd47377eca18a] = env->getMethodID(cls, "getAbsolutePath", "()Ljava/lang/String;");
        mids$[mid_getCanonicalFile_7fba3d9d6a9eec51] = env->getMethodID(cls, "getCanonicalFile", "()Ljava/io/File;");
        mids$[mid_getCanonicalPath_3cffd47377eca18a] = env->getMethodID(cls, "getCanonicalPath", "()Ljava/lang/String;");
        mids$[mid_getFreeSpace_9e26256fb0d384a2] = env->getMethodID(cls, "getFreeSpace", "()J");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_3cffd47377eca18a] = env->getMethodID(cls, "getParent", "()Ljava/lang/String;");
        mids$[mid_getParentFile_7fba3d9d6a9eec51] = env->getMethodID(cls, "getParentFile", "()Ljava/io/File;");
        mids$[mid_getPath_3cffd47377eca18a] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getTotalSpace_9e26256fb0d384a2] = env->getMethodID(cls, "getTotalSpace", "()J");
        mids$[mid_getUsableSpace_9e26256fb0d384a2] = env->getMethodID(cls, "getUsableSpace", "()J");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isAbsolute_89b302893bdbe1f1] = env->getMethodID(cls, "isAbsolute", "()Z");
        mids$[mid_isDirectory_89b302893bdbe1f1] = env->getMethodID(cls, "isDirectory", "()Z");
        mids$[mid_isFile_89b302893bdbe1f1] = env->getMethodID(cls, "isFile", "()Z");
        mids$[mid_isHidden_89b302893bdbe1f1] = env->getMethodID(cls, "isHidden", "()Z");
        mids$[mid_lastModified_9e26256fb0d384a2] = env->getMethodID(cls, "lastModified", "()J");
        mids$[mid_length_9e26256fb0d384a2] = env->getMethodID(cls, "length", "()J");
        mids$[mid_list_5d7d8c500345981d] = env->getMethodID(cls, "list", "()[Ljava/lang/String;");
        mids$[mid_list_760dff7315e46078] = env->getMethodID(cls, "list", "(Ljava/io/FilenameFilter;)[Ljava/lang/String;");
        mids$[mid_listFiles_ef4a3a804b7be7b4] = env->getMethodID(cls, "listFiles", "()[Ljava/io/File;");
        mids$[mid_listFiles_3620e2b59a7e6570] = env->getMethodID(cls, "listFiles", "(Ljava/io/FileFilter;)[Ljava/io/File;");
        mids$[mid_listFiles_0c6292c299f22571] = env->getMethodID(cls, "listFiles", "(Ljava/io/FilenameFilter;)[Ljava/io/File;");
        mids$[mid_listRoots_ef4a3a804b7be7b4] = env->getStaticMethodID(cls, "listRoots", "()[Ljava/io/File;");
        mids$[mid_mkdir_89b302893bdbe1f1] = env->getMethodID(cls, "mkdir", "()Z");
        mids$[mid_mkdirs_89b302893bdbe1f1] = env->getMethodID(cls, "mkdirs", "()Z");
        mids$[mid_renameTo_af02963481b9f0fd] = env->getMethodID(cls, "renameTo", "(Ljava/io/File;)Z");
        mids$[mid_setExecutable_bc7235a51f399397] = env->getMethodID(cls, "setExecutable", "(Z)Z");
        mids$[mid_setExecutable_fb66d73e77ebbfca] = env->getMethodID(cls, "setExecutable", "(ZZ)Z");
        mids$[mid_setLastModified_9848db5862ba9934] = env->getMethodID(cls, "setLastModified", "(J)Z");
        mids$[mid_setReadOnly_89b302893bdbe1f1] = env->getMethodID(cls, "setReadOnly", "()Z");
        mids$[mid_setReadable_bc7235a51f399397] = env->getMethodID(cls, "setReadable", "(Z)Z");
        mids$[mid_setReadable_fb66d73e77ebbfca] = env->getMethodID(cls, "setReadable", "(ZZ)Z");
        mids$[mid_setWritable_bc7235a51f399397] = env->getMethodID(cls, "setWritable", "(Z)Z");
        mids$[mid_setWritable_fb66d73e77ebbfca] = env->getMethodID(cls, "setWritable", "(ZZ)Z");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toURL_5f5f2413a1ee2248] = env->getMethodID(cls, "toURL", "()Ljava/net/URL;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        pathSeparator = new ::java::lang::String(env->getStaticObjectField(cls, "pathSeparator", "Ljava/lang/String;"));
        pathSeparatorChar = env->getStaticCharField(cls, "pathSeparatorChar");
        separator = new ::java::lang::String(env->getStaticObjectField(cls, "separator", "Ljava/lang/String;"));
        separatorChar = env->getStaticCharField(cls, "separatorChar");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    File::File(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    File::File(const File & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7a5b31fafc364859, a0.this$, a1.this$)) {}

    File::File(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

    jboolean File::canExecute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canExecute_89b302893bdbe1f1]);
    }

    jboolean File::canRead() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_89b302893bdbe1f1]);
    }

    jboolean File::canWrite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canWrite_89b302893bdbe1f1]);
    }

    jint File::compareTo(const File & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_562bb2f6e6ce4c78], a0.this$);
    }

    jboolean File::createNewFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_createNewFile_89b302893bdbe1f1]);
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_b4bb821705556510], a0.this$, a1.this$));
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const File & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_847f643c3593d002], a0.this$, a1.this$, a2.this$));
    }

    jboolean File::delete$() const
    {
      return env->callBooleanMethod(this$, mids$[mid_delete_89b302893bdbe1f1]);
    }

    void File::deleteOnExit() const
    {
      env->callVoidMethod(this$, mids$[mid_deleteOnExit_0640e6acf969ed28]);
    }

    jboolean File::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jboolean File::exists() const
    {
      return env->callBooleanMethod(this$, mids$[mid_exists_89b302893bdbe1f1]);
    }

    File File::getAbsoluteFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getAbsoluteFile_7fba3d9d6a9eec51]));
    }

    ::java::lang::String File::getAbsolutePath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAbsolutePath_3cffd47377eca18a]));
    }

    File File::getCanonicalFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getCanonicalFile_7fba3d9d6a9eec51]));
    }

    ::java::lang::String File::getCanonicalPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalPath_3cffd47377eca18a]));
    }

    jlong File::getFreeSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getFreeSpace_9e26256fb0d384a2]);
    }

    ::java::lang::String File::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    ::java::lang::String File::getParent() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParent_3cffd47377eca18a]));
    }

    File File::getParentFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getParentFile_7fba3d9d6a9eec51]));
    }

    ::java::lang::String File::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_3cffd47377eca18a]));
    }

    jlong File::getTotalSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getTotalSpace_9e26256fb0d384a2]);
    }

    jlong File::getUsableSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getUsableSpace_9e26256fb0d384a2]);
    }

    jint File::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean File::isAbsolute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAbsolute_89b302893bdbe1f1]);
    }

    jboolean File::isDirectory() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDirectory_89b302893bdbe1f1]);
    }

    jboolean File::isFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFile_89b302893bdbe1f1]);
    }

    jboolean File::isHidden() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isHidden_89b302893bdbe1f1]);
    }

    jlong File::lastModified() const
    {
      return env->callLongMethod(this$, mids$[mid_lastModified_9e26256fb0d384a2]);
    }

    jlong File::length() const
    {
      return env->callLongMethod(this$, mids$[mid_length_9e26256fb0d384a2]);
    }

    JArray< ::java::lang::String > File::list() const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_5d7d8c500345981d]));
    }

    JArray< ::java::lang::String > File::list(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_760dff7315e46078], a0.this$));
    }

    JArray< File > File::listFiles() const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_ef4a3a804b7be7b4]));
    }

    JArray< File > File::listFiles(const ::java::io::FileFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_3620e2b59a7e6570], a0.this$));
    }

    JArray< File > File::listFiles(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_0c6292c299f22571], a0.this$));
    }

    JArray< File > File::listRoots()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< File >(env->callStaticObjectMethod(cls, mids$[mid_listRoots_ef4a3a804b7be7b4]));
    }

    jboolean File::mkdir() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdir_89b302893bdbe1f1]);
    }

    jboolean File::mkdirs() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdirs_89b302893bdbe1f1]);
    }

    jboolean File::renameTo(const File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_renameTo_af02963481b9f0fd], a0.this$);
    }

    jboolean File::setExecutable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_bc7235a51f399397], a0);
    }

    jboolean File::setExecutable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_fb66d73e77ebbfca], a0, a1);
    }

    jboolean File::setLastModified(jlong a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setLastModified_9848db5862ba9934], a0);
    }

    jboolean File::setReadOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadOnly_89b302893bdbe1f1]);
    }

    jboolean File::setReadable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_bc7235a51f399397], a0);
    }

    jboolean File::setReadable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_fb66d73e77ebbfca], a0, a1);
    }

    jboolean File::setWritable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_bc7235a51f399397], a0);
    }

    jboolean File::setWritable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_fb66d73e77ebbfca], a0, a1);
    }

    ::java::lang::String File::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::net::URL File::toURL() const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_toURL_5f5f2413a1ee2248]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg);
    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds);
    static PyObject *t_File_canExecute(t_File *self);
    static PyObject *t_File_canRead(t_File *self);
    static PyObject *t_File_canWrite(t_File *self);
    static PyObject *t_File_compareTo(t_File *self, PyObject *arg);
    static PyObject *t_File_createNewFile(t_File *self);
    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args);
    static PyObject *t_File_delete(t_File *self);
    static PyObject *t_File_deleteOnExit(t_File *self);
    static PyObject *t_File_equals(t_File *self, PyObject *args);
    static PyObject *t_File_exists(t_File *self);
    static PyObject *t_File_getAbsoluteFile(t_File *self);
    static PyObject *t_File_getAbsolutePath(t_File *self);
    static PyObject *t_File_getCanonicalFile(t_File *self);
    static PyObject *t_File_getCanonicalPath(t_File *self);
    static PyObject *t_File_getFreeSpace(t_File *self);
    static PyObject *t_File_getName(t_File *self);
    static PyObject *t_File_getParent(t_File *self);
    static PyObject *t_File_getParentFile(t_File *self);
    static PyObject *t_File_getPath(t_File *self);
    static PyObject *t_File_getTotalSpace(t_File *self);
    static PyObject *t_File_getUsableSpace(t_File *self);
    static PyObject *t_File_hashCode(t_File *self, PyObject *args);
    static PyObject *t_File_isAbsolute(t_File *self);
    static PyObject *t_File_isDirectory(t_File *self);
    static PyObject *t_File_isFile(t_File *self);
    static PyObject *t_File_isHidden(t_File *self);
    static PyObject *t_File_lastModified(t_File *self);
    static PyObject *t_File_length(t_File *self);
    static PyObject *t_File_list(t_File *self, PyObject *args);
    static PyObject *t_File_listFiles(t_File *self, PyObject *args);
    static PyObject *t_File_listRoots(PyTypeObject *type);
    static PyObject *t_File_mkdir(t_File *self);
    static PyObject *t_File_mkdirs(t_File *self);
    static PyObject *t_File_renameTo(t_File *self, PyObject *arg);
    static PyObject *t_File_setExecutable(t_File *self, PyObject *args);
    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg);
    static PyObject *t_File_setReadOnly(t_File *self);
    static PyObject *t_File_setReadable(t_File *self, PyObject *args);
    static PyObject *t_File_setWritable(t_File *self, PyObject *args);
    static PyObject *t_File_toString(t_File *self, PyObject *args);
    static PyObject *t_File_toURL(t_File *self);
    static PyObject *t_File_get__absolute(t_File *self, void *data);
    static PyObject *t_File_get__absoluteFile(t_File *self, void *data);
    static PyObject *t_File_get__absolutePath(t_File *self, void *data);
    static PyObject *t_File_get__canonicalFile(t_File *self, void *data);
    static PyObject *t_File_get__canonicalPath(t_File *self, void *data);
    static PyObject *t_File_get__directory(t_File *self, void *data);
    static int t_File_set__executable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__file(t_File *self, void *data);
    static PyObject *t_File_get__freeSpace(t_File *self, void *data);
    static PyObject *t_File_get__hidden(t_File *self, void *data);
    static PyObject *t_File_get__name(t_File *self, void *data);
    static PyObject *t_File_get__parent(t_File *self, void *data);
    static PyObject *t_File_get__parentFile(t_File *self, void *data);
    static PyObject *t_File_get__path(t_File *self, void *data);
    static int t_File_set__readable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__totalSpace(t_File *self, void *data);
    static PyObject *t_File_get__usableSpace(t_File *self, void *data);
    static int t_File_set__writable(t_File *self, PyObject *arg, void *data);
    static PyGetSetDef t_File__fields_[] = {
      DECLARE_GET_FIELD(t_File, absolute),
      DECLARE_GET_FIELD(t_File, absoluteFile),
      DECLARE_GET_FIELD(t_File, absolutePath),
      DECLARE_GET_FIELD(t_File, canonicalFile),
      DECLARE_GET_FIELD(t_File, canonicalPath),
      DECLARE_GET_FIELD(t_File, directory),
      DECLARE_SET_FIELD(t_File, executable),
      DECLARE_GET_FIELD(t_File, file),
      DECLARE_GET_FIELD(t_File, freeSpace),
      DECLARE_GET_FIELD(t_File, hidden),
      DECLARE_GET_FIELD(t_File, name),
      DECLARE_GET_FIELD(t_File, parent),
      DECLARE_GET_FIELD(t_File, parentFile),
      DECLARE_GET_FIELD(t_File, path),
      DECLARE_SET_FIELD(t_File, readable),
      DECLARE_GET_FIELD(t_File, totalSpace),
      DECLARE_GET_FIELD(t_File, usableSpace),
      DECLARE_SET_FIELD(t_File, writable),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_File__methods_[] = {
      DECLARE_METHOD(t_File, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, canExecute, METH_NOARGS),
      DECLARE_METHOD(t_File, canRead, METH_NOARGS),
      DECLARE_METHOD(t_File, canWrite, METH_NOARGS),
      DECLARE_METHOD(t_File, compareTo, METH_O),
      DECLARE_METHOD(t_File, createNewFile, METH_NOARGS),
      DECLARE_METHOD(t_File, createTempFile, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_File, delete, METH_NOARGS),
      DECLARE_METHOD(t_File, deleteOnExit, METH_NOARGS),
      DECLARE_METHOD(t_File, equals, METH_VARARGS),
      DECLARE_METHOD(t_File, exists, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsoluteFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsolutePath, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getFreeSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getName, METH_NOARGS),
      DECLARE_METHOD(t_File, getParent, METH_NOARGS),
      DECLARE_METHOD(t_File, getParentFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getTotalSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getUsableSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_File, isAbsolute, METH_NOARGS),
      DECLARE_METHOD(t_File, isDirectory, METH_NOARGS),
      DECLARE_METHOD(t_File, isFile, METH_NOARGS),
      DECLARE_METHOD(t_File, isHidden, METH_NOARGS),
      DECLARE_METHOD(t_File, lastModified, METH_NOARGS),
      DECLARE_METHOD(t_File, length, METH_NOARGS),
      DECLARE_METHOD(t_File, list, METH_VARARGS),
      DECLARE_METHOD(t_File, listFiles, METH_VARARGS),
      DECLARE_METHOD(t_File, listRoots, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_File, mkdir, METH_NOARGS),
      DECLARE_METHOD(t_File, mkdirs, METH_NOARGS),
      DECLARE_METHOD(t_File, renameTo, METH_O),
      DECLARE_METHOD(t_File, setExecutable, METH_VARARGS),
      DECLARE_METHOD(t_File, setLastModified, METH_O),
      DECLARE_METHOD(t_File, setReadOnly, METH_NOARGS),
      DECLARE_METHOD(t_File, setReadable, METH_VARARGS),
      DECLARE_METHOD(t_File, setWritable, METH_VARARGS),
      DECLARE_METHOD(t_File, toString, METH_VARARGS),
      DECLARE_METHOD(t_File, toURL, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(File)[] = {
      { Py_tp_methods, t_File__methods_ },
      { Py_tp_init, (void *) t_File_init_ },
      { Py_tp_getset, t_File__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(File)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(File, t_File, File);

    void t_File::install(PyObject *module)
    {
      installType(&PY_TYPE(File), &PY_TYPE_DEF(File), module, "File", 0);
    }

    void t_File::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "class_", make_descriptor(File::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "wrapfn_", make_descriptor(t_File::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "boxfn_", make_descriptor(boxObject));
      env->getClass(File::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparator", make_descriptor(j2p(*File::pathSeparator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparatorChar", make_descriptor(File::pathSeparatorChar));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separator", make_descriptor(j2p(*File::separator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separatorChar", make_descriptor(File::separatorChar));
    }

    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, File::initializeClass, 1)))
        return NULL;
      return t_File::wrap_Object(File(((t_File *) arg)->object.this$));
    }
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, File::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = File(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ks", File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
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

    static PyObject *t_File_canExecute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canExecute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canRead(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canRead());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canWrite(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canWrite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_compareTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_File_createNewFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.createNewFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1));
            return t_File::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File a2((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ssk", File::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1, a2));
            return t_File::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "createTempFile", args);
      return NULL;
    }

    static PyObject *t_File_delete(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.delete$());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_deleteOnExit(t_File *self)
    {
      OBJ_CALL(self->object.deleteOnExit());
      Py_RETURN_NONE;
    }

    static PyObject *t_File_equals(t_File *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_File_exists(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.exists());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_getAbsoluteFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsoluteFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getAbsolutePath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsolutePath());
      return j2p(result);
    }

    static PyObject *t_File_getCanonicalFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getCanonicalPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalPath());
      return j2p(result);
    }

    static PyObject *t_File_getFreeSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getName(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_File_getParent(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getParent());
      return j2p(result);
    }

    static PyObject *t_File_getParentFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getParentFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_File_getTotalSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getUsableSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_hashCode(t_File *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_File_isAbsolute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAbsolute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isDirectory(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDirectory());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isHidden(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isHidden());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_lastModified(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.lastModified());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_length(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_list(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.list());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.list(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_File_listFiles(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< File > result((jobject) NULL);
          OBJ_CALL(result = self->object.listFiles());
          return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
        }
        break;
       case 1:
        {
          ::java::io::FileFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listFiles", args);
      return NULL;
    }

    static PyObject *t_File_listRoots(PyTypeObject *type)
    {
      JArray< File > result((jobject) NULL);
      OBJ_CALL(result = ::java::io::File::listRoots());
      return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
    }

    static PyObject *t_File_mkdir(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdir());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_mkdirs(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdirs());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_renameTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.renameTo(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "renameTo", arg);
      return NULL;
    }

    static PyObject *t_File_setExecutable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setExecutable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setExecutable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setExecutable", args);
      return NULL;
    }

    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg)
    {
      jlong a0;
      jboolean result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.setLastModified(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setLastModified", arg);
      return NULL;
    }

    static PyObject *t_File_setReadOnly(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.setReadOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_setReadable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setReadable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setReadable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setReadable", args);
      return NULL;
    }

    static PyObject *t_File_setWritable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setWritable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setWritable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setWritable", args);
      return NULL;
    }

    static PyObject *t_File_toString(t_File *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_File_toURL(t_File *self)
    {
      ::java::net::URL result((jobject) NULL);
      OBJ_CALL(result = self->object.toURL());
      return ::java::net::t_URL::wrap_Object(result);
    }

    static PyObject *t_File_get__absolute(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAbsolute());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__absoluteFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsoluteFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__absolutePath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsolutePath());
      return j2p(value);
    }

    static PyObject *t_File_get__canonicalFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__canonicalPath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalPath());
      return j2p(value);
    }

    static PyObject *t_File_get__directory(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDirectory());
      Py_RETURN_BOOL(value);
    }

    static int t_File_set__executable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setExecutable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "executable", arg);
      return -1;
    }

    static PyObject *t_File_get__file(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFile());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__freeSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__hidden(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isHidden());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__name(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_File_get__parent(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getParent());
      return j2p(value);
    }

    static PyObject *t_File_get__parentFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getParentFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__path(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static int t_File_set__readable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setReadable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "readable", arg);
      return -1;
    }

    static PyObject *t_File_get__totalSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__usableSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static int t_File_set__writable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setWritable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "writable", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GalileoScale::class$ = NULL;
      jmethodID *GalileoScale::mids$ = NULL;
      bool GalileoScale::live$ = false;

      jclass GalileoScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GalileoScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GalileoScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble GalileoScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GalileoScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble GalileoScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String GalileoScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_getName(t_GalileoScale *self);
      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data);
      static PyGetSetDef t_GalileoScale__fields_[] = {
        DECLARE_GET_FIELD(t_GalileoScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GalileoScale__methods_[] = {
        DECLARE_METHOD(t_GalileoScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GalileoScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GalileoScale)[] = {
        { Py_tp_methods, t_GalileoScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GalileoScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GalileoScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GalileoScale, t_GalileoScale, GalileoScale);

      void t_GalileoScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GalileoScale), &PY_TYPE_DEF(GalileoScale), module, "GalileoScale", 0);
      }

      void t_GalileoScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "class_", make_descriptor(GalileoScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "wrapfn_", make_descriptor(t_GalileoScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GalileoScale::initializeClass, 1)))
          return NULL;
        return t_GalileoScale::wrap_Object(GalileoScale(((t_GalileoScale *) arg)->object.this$));
      }
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GalileoScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GalileoScale_getName(t_GalileoScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args)
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

      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args)
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

      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GalileoScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistory::class$ = NULL;
              jmethodID *TrajectoryStateHistory::mids$ = NULL;
              bool TrajectoryStateHistory::live$ = false;

              jclass TrajectoryStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8aabf9afabae729c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Ljava/util/List;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                  mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getBody_0c55bd1adf955c4c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
                  mids$[mid_getCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_1911a405d6451e8c] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajectoryStates_0d9551367f7ecdef] = env->getMethodID(cls, "getTrajectoryStates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistory::TrajectoryStateHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a0, const ::java::util::List & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8aabf9afabae729c, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
              }

              ::org::orekit::bodies::OneAxisEllipsoid TrajectoryStateHistory::getBody() const
              {
                return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_0c55bd1adf955c4c]));
              }

              ::java::util::List TrajectoryStateHistory::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_0d9551367f7ecdef]));
              }

              ::org::orekit::frames::Frame TrajectoryStateHistory::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
              }

              jint TrajectoryStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata TrajectoryStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_1911a405d6451e8c]));
              }

              jdouble TrajectoryStateHistory::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
              }

              ::java::util::List TrajectoryStateHistory::getTrajectoryStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryStates_0d9551367f7ecdef]));
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
              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, body),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, coordinates),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, frame),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, metadata),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, mu),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, start),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, stop),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, trajectoryStates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistory__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getBody, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMu, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStop, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getTrajectoryStates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistory)[] = {
                { Py_tp_methods, t_TrajectoryStateHistory__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistory_init_ },
                { Py_tp_getset, t_TrajectoryStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistory, t_TrajectoryStateHistory, TrajectoryStateHistory);

              void t_TrajectoryStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistory), &PY_TYPE_DEF(TrajectoryStateHistory), module, "TrajectoryStateHistory", 0);
              }

              void t_TrajectoryStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "class_", make_descriptor(TrajectoryStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "wrapfn_", make_descriptor(t_TrajectoryStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistory::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistory::wrap_Object(TrajectoryStateHistory(((t_TrajectoryStateHistory *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                TrajectoryStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kKkD", ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
                {
                  INT_CALL(object = TrajectoryStateHistory(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
                OBJ_CALL(result = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryState));
              }

              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
                OBJ_CALL(value = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/hipparchus/analysis/function/Tanh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tanh::class$ = NULL;
        jmethodID *Tanh::mids$ = NULL;
        bool Tanh::live$ = false;

        jclass Tanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tanh::Tanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Tanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args);

        static PyMethodDef t_Tanh__methods_[] = {
          DECLARE_METHOD(t_Tanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tanh)[] = {
          { Py_tp_methods, t_Tanh__methods_ },
          { Py_tp_init, (void *) t_Tanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tanh, t_Tanh, Tanh);

        void t_Tanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Tanh), &PY_TYPE_DEF(Tanh), module, "Tanh", 0);
        }

        void t_Tanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "class_", make_descriptor(Tanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "wrapfn_", make_descriptor(t_Tanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tanh::initializeClass, 1)))
            return NULL;
          return t_Tanh::wrap_Object(Tanh(((t_Tanh *) arg)->object.this$));
        }
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds)
        {
          Tanh object((jobject) NULL);

          INT_CALL(object = Tanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *AbstractDualFrequencyCombination::mids$ = NULL;
          bool AbstractDualFrequencyCombination::live$ = false;
          jdouble AbstractDualFrequencyCombination::MHZ_TO_HZ = (jdouble) 0;

          jclass AbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_82c5de1a9cc4c5da] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_54b5aea6b6555487] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_1aca6111050d8282] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_ec5e21d51ba3cb9a] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MHZ_TO_HZ = env->getStaticDoubleField(cls, "MHZ_TO_HZ");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_82c5de1a9cc4c5da], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_54b5aea6b6555487], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractDualFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
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
        namespace gnss {
          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self);
          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractDualFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractDualFrequencyCombination, t_AbstractDualFrequencyCombination, AbstractDualFrequencyCombination);

          void t_AbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractDualFrequencyCombination), &PY_TYPE_DEF(AbstractDualFrequencyCombination), module, "AbstractDualFrequencyCombination", 0);
          }

          void t_AbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "class_", make_descriptor(AbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            env->getClass(AbstractDualFrequencyCombination::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "MHZ_TO_HZ", make_descriptor(AbstractDualFrequencyCombination::MHZ_TO_HZ));
          }

          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractDualFrequencyCombination::wrap_Object(AbstractDualFrequencyCombination(((t_AbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1045Data::class$ = NULL;
              jmethodID *Rtcm1045Data::mids$ = NULL;
              bool Rtcm1045Data::live$ = false;

              jclass Rtcm1045Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGalileoDataValidityStatus_412668abc8d889e9] = env->getMethodID(cls, "getGalileoDataValidityStatus", "()I");
                  mids$[mid_getGalileoNavigationMessage_5c5a0a2ca9495fcb] = env->getMethodID(cls, "getGalileoNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoNavigationMessage_f5bf78c7357e4450] = env->getMethodID(cls, "getGalileoNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoToc_557b8123390d8d0c] = env->getMethodID(cls, "getGalileoToc", "()D");
                  mids$[mid_setGalileoDataValidityStatus_a3da1a935cb37f7b] = env->getMethodID(cls, "setGalileoDataValidityStatus", "(I)V");
                  mids$[mid_setGalileoNavigationMessage_91f1ae10feea1e6d] = env->getMethodID(cls, "setGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
                  mids$[mid_setGalileoToc_10f281d777284cea] = env->getMethodID(cls, "setGalileoToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045Data::Rtcm1045Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint Rtcm1045Data::getGalileoDataValidityStatus() const
              {
                return env->callIntMethod(this$, mids$[mid_getGalileoDataValidityStatus_412668abc8d889e9]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_5c5a0a2ca9495fcb]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_f5bf78c7357e4450], a0.this$));
              }

              jdouble Rtcm1045Data::getGalileoToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGalileoToc_557b8123390d8d0c]);
              }

              void Rtcm1045Data::setGalileoDataValidityStatus(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoDataValidityStatus_a3da1a935cb37f7b], a0);
              }

              void Rtcm1045Data::setGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoNavigationMessage_91f1ae10feea1e6d], a0.this$);
              }

              void Rtcm1045Data::setGalileoToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoToc_10f281d777284cea], a0);
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
              static PyObject *t_Rtcm1045Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1045Data_init_(t_Rtcm1045Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1045Data_getGalileoDataValidityStatus(t_Rtcm1045Data *self);
              static PyObject *t_Rtcm1045Data_getGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *args);
              static PyObject *t_Rtcm1045Data_getGalileoToc(t_Rtcm1045Data *self);
              static PyObject *t_Rtcm1045Data_setGalileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_setGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_setGalileoToc(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_get__galileoDataValidityStatus(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1045Data_get__galileoNavigationMessage(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1045Data_get__galileoToc(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoToc(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1045Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoDataValidityStatus),
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1045Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1045Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoDataValidityStatus, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoDataValidityStatus, METH_O),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1045Data)[] = {
                { Py_tp_methods, t_Rtcm1045Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1045Data_init_ },
                { Py_tp_getset, t_Rtcm1045Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1045Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1045Data, t_Rtcm1045Data, Rtcm1045Data);

              void t_Rtcm1045Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1045Data), &PY_TYPE_DEF(Rtcm1045Data), module, "Rtcm1045Data", 0);
              }

              void t_Rtcm1045Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "class_", make_descriptor(Rtcm1045Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "wrapfn_", make_descriptor(t_Rtcm1045Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1045Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1045Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1045Data::wrap_Object(Rtcm1045Data(((t_Rtcm1045Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1045Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1045Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1045Data_init_(t_Rtcm1045Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1045Data object((jobject) NULL);

                INT_CALL(object = Rtcm1045Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1045Data_getGalileoDataValidityStatus(t_Rtcm1045Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGalileoDataValidityStatus());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1045Data_getGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGalileoNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGalileoNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_getGalileoToc(t_Rtcm1045Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGalileoToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1045Data_setGalileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGalileoDataValidityStatus(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoDataValidityStatus", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_setGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGalileoNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_setGalileoToc(t_Rtcm1045Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGalileoToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_get__galileoDataValidityStatus(t_Rtcm1045Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGalileoDataValidityStatus());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1045Data_set__galileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGalileoDataValidityStatus(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoDataValidityStatus", arg);
                return -1;
              }

              static PyObject *t_Rtcm1045Data_get__galileoNavigationMessage(t_Rtcm1045Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGalileoNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1045Data_set__galileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGalileoNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1045Data_get__galileoToc(t_Rtcm1045Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGalileoToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1045Data_set__galileoToc(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGalileoToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoToc", arg);
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderProcessingState::class$ = NULL;
            jmethodID *CdmHeaderProcessingState::mids$ = NULL;
            bool CdmHeaderProcessingState::live$ = false;

            jclass CdmHeaderProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_96fc3f4ca65a13d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)V");
                mids$[mid_processToken_7f6d4ab73f1deb26] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeaderProcessingState::CdmHeaderProcessingState(const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96fc3f4ca65a13d8, a0.this$)) {}

            jboolean CdmHeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_7f6d4ab73f1deb26], a0.this$);
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
            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg);

            static PyMethodDef t_CdmHeaderProcessingState__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderProcessingState)[] = {
              { Py_tp_methods, t_CdmHeaderProcessingState__methods_ },
              { Py_tp_init, (void *) t_CdmHeaderProcessingState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmHeaderProcessingState, t_CdmHeaderProcessingState, CdmHeaderProcessingState);

            void t_CdmHeaderProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderProcessingState), &PY_TYPE_DEF(CdmHeaderProcessingState), module, "CdmHeaderProcessingState", 0);
            }

            void t_CdmHeaderProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "class_", make_descriptor(CdmHeaderProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "wrapfn_", make_descriptor(t_CdmHeaderProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderProcessingState::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderProcessingState::wrap_Object(CdmHeaderProcessingState(((t_CdmHeaderProcessingState *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a0((jobject) NULL);
              PyTypeObject **p0;
              CdmHeaderProcessingState object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                INT_CALL(object = CdmHeaderProcessingState(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
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
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTile::class$ = NULL;
        jmethodID *SimpleTile::mids$ = NULL;
        bool SimpleTile::live$ = false;

        jclass SimpleTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_9786a4c652387487] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_getElevationAtIndices_21b81d54c06b64b0] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_abbeb9db7144ca23] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_abbeb9db7144ca23] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_69cfb132c661aca4] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_412668abc8d889e9] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_557b8123390d8d0c] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_f18cc9781bcd74eb] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_69cfb132c661aca4] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_412668abc8d889e9] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_557b8123390d8d0c] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_557b8123390d8d0c] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_412668abc8d889e9] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_412668abc8d889e9] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_557b8123390d8d0c] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_412668abc8d889e9] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_412668abc8d889e9] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_2268d18be49a6087] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_setElevation_754312f3734d6e2f] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_865bb527118ba3d3] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");
            mids$[mid_tileUpdateCompleted_0640e6acf969ed28] = env->getMethodID(cls, "tileUpdateCompleted", "()V");
            mids$[mid_processUpdatedElevation_cc18240f4a737f14] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint SimpleTile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_9786a4c652387487], a0.this$, a1.this$, a2, a3));
        }

        jdouble SimpleTile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_21b81d54c06b64b0], a0, a1);
        }

        jint SimpleTile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_abbeb9db7144ca23], a0);
        }

        jint SimpleTile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_abbeb9db7144ca23], a0);
        }

        jdouble SimpleTile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_69cfb132c661aca4], a0);
        }

        jint SimpleTile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_412668abc8d889e9]);
        }

        jdouble SimpleTile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_557b8123390d8d0c]);
        }

        ::org::orekit::rugged::raster::Tile$Location SimpleTile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_f18cc9781bcd74eb], a0, a1));
        }

        jdouble SimpleTile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_69cfb132c661aca4], a0);
        }

        jint SimpleTile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_412668abc8d889e9]);
        }

        jdouble SimpleTile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_557b8123390d8d0c]);
        }

        jdouble SimpleTile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_557b8123390d8d0c]);
        }

        jint SimpleTile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_412668abc8d889e9]);
        }

        jint SimpleTile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_412668abc8d889e9]);
        }

        jdouble SimpleTile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_557b8123390d8d0c]);
        }

        jdouble SimpleTile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_557b8123390d8d0c]);
        }

        jdouble SimpleTile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_557b8123390d8d0c]);
        }

        jint SimpleTile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_412668abc8d889e9]);
        }

        jint SimpleTile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_412668abc8d889e9]);
        }

        jdouble SimpleTile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_557b8123390d8d0c]);
        }

        jdouble SimpleTile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_557b8123390d8d0c]);
        }

        jdouble SimpleTile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_2268d18be49a6087], a0, a1);
        }

        void SimpleTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_754312f3734d6e2f], a0, a1, a2);
        }

        void SimpleTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_865bb527118ba3d3], a0, a1, a2, a3, a4, a5);
        }

        void SimpleTile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_0640e6acf969ed28]);
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
        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self);
        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data);
        static PyGetSetDef t_SimpleTile__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleTile, latitudeRows),
          DECLARE_GET_FIELD(t_SimpleTile, latitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeColumns),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevation),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLongitude),
          DECLARE_GET_FIELD(t_SimpleTile, minElevation),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleTile__methods_[] = {
          DECLARE_METHOD(t_SimpleTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setGeometry, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTile)[] = {
          { Py_tp_methods, t_SimpleTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SimpleTile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTile, t_SimpleTile, SimpleTile);

        void t_SimpleTile::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTile), &PY_TYPE_DEF(SimpleTile), module, "SimpleTile", 0);
        }

        void t_SimpleTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "class_", make_descriptor(SimpleTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "wrapfn_", make_descriptor(t_SimpleTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTile::initializeClass, 1)))
            return NULL;
          return t_SimpleTile::wrap_Object(SimpleTile(((t_SimpleTile *) arg)->object.this$));
        }
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkII", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.cellIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "cellIntersection", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevationAtIndices(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevationAtIndices", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLatitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLatitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLongitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLongitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLatitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLatitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLocation(a0, a1));
            return ::org::orekit::rugged::raster::t_Tile$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLongitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLongitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolateElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolateElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/String.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ItrfVersionProvider::class$ = NULL;
      jmethodID *ItrfVersionProvider::mids$ = NULL;
      bool ItrfVersionProvider::live$ = false;

      jclass ItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConfiguration_a005f84471bdab98] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ItrfVersionProvider::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_a005f84471bdab98], a0.this$, a1));
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
      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args);

      static PyMethodDef t_ItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_ItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ItrfVersionProvider)[] = {
        { Py_tp_methods, t_ItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ItrfVersionProvider, t_ItrfVersionProvider, ItrfVersionProvider);

      void t_ItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ItrfVersionProvider), &PY_TYPE_DEF(ItrfVersionProvider), module, "ItrfVersionProvider", 0);
      }

      void t_ItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "class_", make_descriptor(ItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "wrapfn_", make_descriptor(t_ItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_ItrfVersionProvider::wrap_Object(ItrfVersionProvider(((t_ItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/IterationListener.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationManager::class$ = NULL;
      jmethodID *IterationManager::mids$ = NULL;
      bool IterationManager::live$ = false;

      jclass IterationManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_6115a254f339da5a] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_addIterationListener_cf70a3bbdf828b86] = env->getMethodID(cls, "addIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_fireInitializationEvent_68991010a72f5d93] = env->getMethodID(cls, "fireInitializationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationPerformedEvent_68991010a72f5d93] = env->getMethodID(cls, "fireIterationPerformedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationStartedEvent_68991010a72f5d93] = env->getMethodID(cls, "fireIterationStartedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireTerminationEvent_68991010a72f5d93] = env->getMethodID(cls, "fireTerminationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_getIterations_412668abc8d889e9] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxIterations_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_incrementIterationCount_0640e6acf969ed28] = env->getMethodID(cls, "incrementIterationCount", "()V");
          mids$[mid_removeIterationListener_cf70a3bbdf828b86] = env->getMethodID(cls, "removeIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_resetIterationCount_0640e6acf969ed28] = env->getMethodID(cls, "resetIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationManager::IterationManager(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      IterationManager::IterationManager(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6115a254f339da5a, a0, a1.this$)) {}

      void IterationManager::addIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addIterationListener_cf70a3bbdf828b86], a0.this$);
      }

      void IterationManager::fireInitializationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireInitializationEvent_68991010a72f5d93], a0.this$);
      }

      void IterationManager::fireIterationPerformedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationPerformedEvent_68991010a72f5d93], a0.this$);
      }

      void IterationManager::fireIterationStartedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationStartedEvent_68991010a72f5d93], a0.this$);
      }

      void IterationManager::fireTerminationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireTerminationEvent_68991010a72f5d93], a0.this$);
      }

      jint IterationManager::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_412668abc8d889e9]);
      }

      jint IterationManager::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_412668abc8d889e9]);
      }

      void IterationManager::incrementIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_incrementIterationCount_0640e6acf969ed28]);
      }

      void IterationManager::removeIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeIterationListener_cf70a3bbdf828b86], a0.this$);
      }

      void IterationManager::resetIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_resetIterationCount_0640e6acf969ed28]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_getIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data);
      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data);
      static PyGetSetDef t_IterationManager__fields_[] = {
        DECLARE_GET_FIELD(t_IterationManager, iterations),
        DECLARE_GET_FIELD(t_IterationManager, maxIterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationManager__methods_[] = {
        DECLARE_METHOD(t_IterationManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, addIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, fireInitializationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationPerformedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationStartedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireTerminationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, incrementIterationCount, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, removeIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, resetIterationCount, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationManager)[] = {
        { Py_tp_methods, t_IterationManager__methods_ },
        { Py_tp_init, (void *) t_IterationManager_init_ },
        { Py_tp_getset, t_IterationManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterationManager, t_IterationManager, IterationManager);

      void t_IterationManager::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationManager), &PY_TYPE_DEF(IterationManager), module, "IterationManager", 0);
      }

      void t_IterationManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "class_", make_descriptor(IterationManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "wrapfn_", make_descriptor(t_IterationManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationManager::initializeClass, 1)))
          return NULL;
        return t_IterationManager::wrap_Object(IterationManager(((t_IterationManager *) arg)->object.this$));
      }
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterationManager(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = IterationManager(a0, a1));
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

      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireInitializationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireInitializationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationPerformedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationPerformedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationStartedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationStartedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireTerminationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireTerminationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_getIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.incrementIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.resetIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCartesianOrbit::class$ = NULL;
      jmethodID *FieldCartesianOrbit::mids$ = NULL;
      bool FieldCartesianOrbit::live$ = false;

      jclass FieldCartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8c98afebb6212490] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_e094c41cf93fd5ed] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CartesianOrbit;)V");
          mids$[mid_init$_7568a622582bbb9f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_b2c573ad66dbbf4e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_2003571c0e8d33c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_442a44d8b8481234] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_613c8f46c659f636] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_613c8f46c659f636] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_613c8f46c659f636] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_613c8f46c659f636] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_613c8f46c659f636] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_613c8f46c659f636] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_613c8f46c659f636] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_613c8f46c659f636] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_613c8f46c659f636] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_613c8f46c659f636] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_613c8f46c659f636] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_613c8f46c659f636] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_613c8f46c659f636] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_613c8f46c659f636] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_613c8f46c659f636] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_89b302893bdbe1f1] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_9625894653c5fffe] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_shiftedBy_9e5336199776f755] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_toOrbit_0b5f23f972fe7789] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPVCoordinates_232470f1b769250c] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_2d64addf4c3391d9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_8c98afebb6212490, a0.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CartesianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_e094c41cf93fd5ed, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_7568a622582bbb9f, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b2c573ad66dbbf4e, a0.this$, a1.this$, a2.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_2003571c0e8d33c1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      void FieldCartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_442a44d8b8481234], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_613c8f46c659f636]));
      }

      ::org::orekit::orbits::OrbitType FieldCartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean FieldCartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_89b302893bdbe1f1]);
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_9625894653c5fffe], a0));
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_9e5336199776f755], a0.this$));
      }

      ::org::orekit::orbits::CartesianOrbit FieldCartesianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_0b5f23f972fe7789]));
      }

      ::java::lang::String FieldCartesianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args);
      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data);
      static PyGetSetDef t_FieldCartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, a),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, e),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, i),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, type),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCartesianOrbit)[] = {
        { Py_tp_methods, t_FieldCartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCartesianOrbit_init_ },
        { Py_tp_getset, t_FieldCartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCartesianOrbit, t_FieldCartesianOrbit, FieldCartesianOrbit);
      PyObject *t_FieldCartesianOrbit::wrap_Object(const FieldCartesianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCartesianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCartesianOrbit), &PY_TYPE_DEF(FieldCartesianOrbit), module, "FieldCartesianOrbit", 0);
      }

      void t_FieldCartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "class_", make_descriptor(FieldCartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "wrapfn_", make_descriptor(t_FieldCartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCartesianOrbit::wrap_Object(FieldCartesianOrbit(((t_FieldCartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CartesianOrbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CartesianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateVectorFunction::class$ = NULL;
      jmethodID *UnivariateVectorFunction::mids$ = NULL;
      bool UnivariateVectorFunction::live$ = false;

      jclass UnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_ebf0376b0df5061b] = env->getMethodID(cls, "value", "(D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > UnivariateVectorFunction::value(jdouble a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_ebf0376b0df5061b], a0));
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
      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunction)[] = {
        { Py_tp_methods, t_UnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateVectorFunction, t_UnivariateVectorFunction, UnivariateVectorFunction);

      void t_UnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateVectorFunction), &PY_TYPE_DEF(UnivariateVectorFunction), module, "UnivariateVectorFunction", 0);
      }

      void t_UnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "class_", make_descriptor(UnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "wrapfn_", make_descriptor(t_UnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateVectorFunction::wrap_Object(UnivariateVectorFunction(((t_UnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
