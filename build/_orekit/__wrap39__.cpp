#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *InterpolationMethod::class$ = NULL;
              jmethodID *InterpolationMethod::mids$ = NULL;
              bool InterpolationMethod::live$ = false;
              InterpolationMethod *InterpolationMethod::HERMITE = NULL;
              InterpolationMethod *InterpolationMethod::LAGRANGE = NULL;
              InterpolationMethod *InterpolationMethod::LINEAR = NULL;
              InterpolationMethod *InterpolationMethod::PROPAGATE = NULL;

              jclass InterpolationMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_0dfa532ad755c506] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_values_3bd2baae340c1c3c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  HERMITE = new InterpolationMethod(env->getStaticObjectField(cls, "HERMITE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  LAGRANGE = new InterpolationMethod(env->getStaticObjectField(cls, "LAGRANGE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  LINEAR = new InterpolationMethod(env->getStaticObjectField(cls, "LINEAR", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  PROPAGATE = new InterpolationMethod(env->getStaticObjectField(cls, "PROPAGATE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              InterpolationMethod InterpolationMethod::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InterpolationMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0dfa532ad755c506], a0.this$));
              }

              JArray< InterpolationMethod > InterpolationMethod::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InterpolationMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_3bd2baae340c1c3c]));
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
              static PyObject *t_InterpolationMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InterpolationMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InterpolationMethod_of_(t_InterpolationMethod *self, PyObject *args);
              static PyObject *t_InterpolationMethod_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InterpolationMethod_values(PyTypeObject *type);
              static PyObject *t_InterpolationMethod_get__parameters_(t_InterpolationMethod *self, void *data);
              static PyGetSetDef t_InterpolationMethod__fields_[] = {
                DECLARE_GET_FIELD(t_InterpolationMethod, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InterpolationMethod__methods_[] = {
                DECLARE_METHOD(t_InterpolationMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, of_, METH_VARARGS),
                DECLARE_METHOD(t_InterpolationMethod, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InterpolationMethod)[] = {
                { Py_tp_methods, t_InterpolationMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InterpolationMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InterpolationMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InterpolationMethod, t_InterpolationMethod, InterpolationMethod);
              PyObject *t_InterpolationMethod::wrap_Object(const InterpolationMethod& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InterpolationMethod::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InterpolationMethod *self = (t_InterpolationMethod *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InterpolationMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InterpolationMethod::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InterpolationMethod *self = (t_InterpolationMethod *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InterpolationMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(InterpolationMethod), &PY_TYPE_DEF(InterpolationMethod), module, "InterpolationMethod", 0);
              }

              void t_InterpolationMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "class_", make_descriptor(InterpolationMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "wrapfn_", make_descriptor(t_InterpolationMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(InterpolationMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "HERMITE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::HERMITE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "LAGRANGE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::LAGRANGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "LINEAR", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::LINEAR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "PROPAGATE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::PROPAGATE)));
              }

              static PyObject *t_InterpolationMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InterpolationMethod::initializeClass, 1)))
                  return NULL;
                return t_InterpolationMethod::wrap_Object(InterpolationMethod(((t_InterpolationMethod *) arg)->object.this$));
              }
              static PyObject *t_InterpolationMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InterpolationMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InterpolationMethod_of_(t_InterpolationMethod *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InterpolationMethod_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InterpolationMethod result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::valueOf(a0));
                  return t_InterpolationMethod::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InterpolationMethod_values(PyTypeObject *type)
              {
                JArray< InterpolationMethod > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::values());
                return JArray<jobject>(result.this$).wrap(t_InterpolationMethod::wrap_jobject);
              }
              static PyObject *t_InterpolationMethod_get__parameters_(t_InterpolationMethod *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmWriter::class$ = NULL;
          jmethodID *NdmWriter::mids$ = NULL;
          bool NdmWriter::live$ = false;

          jclass NdmWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6e2761ea0b74d795] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/WriterBuilder;)V");
              mids$[mid_writeComment_5e4275dce230c0e8] = env->getMethodID(cls, "writeComment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Ljava/lang/String;)V");
              mids$[mid_writeConstituent_d663c14e7d793f18] = env->getMethodID(cls, "writeConstituent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
              mids$[mid_writeMessage_10305fadb6258b85] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/Ndm;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NdmWriter::NdmWriter(const ::org::orekit::files::ccsds::ndm::WriterBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e2761ea0b74d795, a0.this$)) {}

          void NdmWriter::writeComment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeComment_5e4275dce230c0e8], a0.this$, a1.this$);
          }

          void NdmWriter::writeConstituent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeConstituent_d663c14e7d793f18], a0.this$, a1.this$);
          }

          void NdmWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::Ndm & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeMessage_10305fadb6258b85], a0.this$, a1.this$);
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
          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args);

          static PyMethodDef t_NdmWriter__methods_[] = {
            DECLARE_METHOD(t_NdmWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, writeComment, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeConstituent, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeMessage, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmWriter)[] = {
            { Py_tp_methods, t_NdmWriter__methods_ },
            { Py_tp_init, (void *) t_NdmWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmWriter, t_NdmWriter, NdmWriter);

          void t_NdmWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmWriter), &PY_TYPE_DEF(NdmWriter), module, "NdmWriter", 0);
          }

          void t_NdmWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "class_", make_descriptor(NdmWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "wrapfn_", make_descriptor(t_NdmWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmWriter::initializeClass, 1)))
              return NULL;
            return t_NdmWriter::wrap_Object(NdmWriter(((t_NdmWriter *) arg)->object.this$));
          }
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::ndm::WriterBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            NdmWriter object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::WriterBuilder::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_WriterBuilder::parameters_))
            {
              INT_CALL(object = NdmWriter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeComment(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeComment", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
            {
              OBJ_CALL(self->object.writeConstituent(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeConstituent", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::Ndm a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::Ndm::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeMessage(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SolutionCallback.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *SolutionCallback::class$ = NULL;
        jmethodID *SolutionCallback::mids$ = NULL;
        bool SolutionCallback::live$ = false;

        jclass SolutionCallback::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/SolutionCallback");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSolution_a812a1ba2cf9f7b4] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_isSolutionOptimal_eee3de00fe971136] = env->getMethodID(cls, "isSolutionOptimal", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolutionCallback::SolutionCallback() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::optim::PointValuePair SolutionCallback::getSolution() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getSolution_a812a1ba2cf9f7b4]));
        }

        jboolean SolutionCallback::isSolutionOptimal() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSolutionOptimal_eee3de00fe971136]);
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
      namespace linear {
        static PyObject *t_SolutionCallback_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolutionCallback_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolutionCallback_init_(t_SolutionCallback *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolutionCallback_getSolution(t_SolutionCallback *self);
        static PyObject *t_SolutionCallback_isSolutionOptimal(t_SolutionCallback *self);
        static PyObject *t_SolutionCallback_get__solution(t_SolutionCallback *self, void *data);
        static PyObject *t_SolutionCallback_get__solutionOptimal(t_SolutionCallback *self, void *data);
        static PyGetSetDef t_SolutionCallback__fields_[] = {
          DECLARE_GET_FIELD(t_SolutionCallback, solution),
          DECLARE_GET_FIELD(t_SolutionCallback, solutionOptimal),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolutionCallback__methods_[] = {
          DECLARE_METHOD(t_SolutionCallback, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolutionCallback, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolutionCallback, getSolution, METH_NOARGS),
          DECLARE_METHOD(t_SolutionCallback, isSolutionOptimal, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolutionCallback)[] = {
          { Py_tp_methods, t_SolutionCallback__methods_ },
          { Py_tp_init, (void *) t_SolutionCallback_init_ },
          { Py_tp_getset, t_SolutionCallback__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolutionCallback)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolutionCallback, t_SolutionCallback, SolutionCallback);

        void t_SolutionCallback::install(PyObject *module)
        {
          installType(&PY_TYPE(SolutionCallback), &PY_TYPE_DEF(SolutionCallback), module, "SolutionCallback", 0);
        }

        void t_SolutionCallback::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "class_", make_descriptor(SolutionCallback::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "wrapfn_", make_descriptor(t_SolutionCallback::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolutionCallback_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolutionCallback::initializeClass, 1)))
            return NULL;
          return t_SolutionCallback::wrap_Object(SolutionCallback(((t_SolutionCallback *) arg)->object.this$));
        }
        static PyObject *t_SolutionCallback_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolutionCallback::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolutionCallback_init_(t_SolutionCallback *self, PyObject *args, PyObject *kwds)
        {
          SolutionCallback object((jobject) NULL);

          INT_CALL(object = SolutionCallback());
          self->object = object;

          return 0;
        }

        static PyObject *t_SolutionCallback_getSolution(t_SolutionCallback *self)
        {
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
        }

        static PyObject *t_SolutionCallback_isSolutionOptimal(t_SolutionCallback *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSolutionOptimal());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolutionCallback_get__solution(t_SolutionCallback *self, void *data)
        {
          ::org::hipparchus::optim::PointValuePair value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolution());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(value);
        }

        static PyObject *t_SolutionCallback_get__solutionOptimal(t_SolutionCallback *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSolutionOptimal());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Data::class$ = NULL;
              jmethodID *SsrIm201Data::mids$ = NULL;
              bool SsrIm201Data::live$ = false;

              jclass SsrIm201Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCnm_eda3f19b8225f78f] = env->getMethodID(cls, "getCnm", "()[[D");
                  mids$[mid_getHeightIonosphericLayer_9981f74b2d109da6] = env->getMethodID(cls, "getHeightIonosphericLayer", "()D");
                  mids$[mid_getSnm_eda3f19b8225f78f] = env->getMethodID(cls, "getSnm", "()[[D");
                  mids$[mid_getSphericalHarmonicsDegree_d6ab429752e7c267] = env->getMethodID(cls, "getSphericalHarmonicsDegree", "()I");
                  mids$[mid_getSphericalHarmonicsOrder_d6ab429752e7c267] = env->getMethodID(cls, "getSphericalHarmonicsOrder", "()I");
                  mids$[mid_setCnm_11ecdbb5af7ed67d] = env->getMethodID(cls, "setCnm", "([[D)V");
                  mids$[mid_setHeightIonosphericLayer_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setHeightIonosphericLayer", "(D)V");
                  mids$[mid_setSnm_11ecdbb5af7ed67d] = env->getMethodID(cls, "setSnm", "([[D)V");
                  mids$[mid_setSphericalHarmonicsDegree_8fd427ab23829bf5] = env->getMethodID(cls, "setSphericalHarmonicsDegree", "(I)V");
                  mids$[mid_setSphericalHarmonicsOrder_8fd427ab23829bf5] = env->getMethodID(cls, "setSphericalHarmonicsOrder", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Data::SsrIm201Data() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              JArray< JArray< jdouble > > SsrIm201Data::getCnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCnm_eda3f19b8225f78f]));
              }

              jdouble SsrIm201Data::getHeightIonosphericLayer() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHeightIonosphericLayer_9981f74b2d109da6]);
              }

              JArray< JArray< jdouble > > SsrIm201Data::getSnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getSnm_eda3f19b8225f78f]));
              }

              jint SsrIm201Data::getSphericalHarmonicsDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsDegree_d6ab429752e7c267]);
              }

              jint SsrIm201Data::getSphericalHarmonicsOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsOrder_d6ab429752e7c267]);
              }

              void SsrIm201Data::setCnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCnm_11ecdbb5af7ed67d], a0.this$);
              }

              void SsrIm201Data::setHeightIonosphericLayer(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHeightIonosphericLayer_1ad26e8c8c0cd65b], a0);
              }

              void SsrIm201Data::setSnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSnm_11ecdbb5af7ed67d], a0.this$);
              }

              void SsrIm201Data::setSphericalHarmonicsDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsDegree_8fd427ab23829bf5], a0);
              }

              void SsrIm201Data::setSphericalHarmonicsOrder(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsOrder_8fd427ab23829bf5], a0);
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
            namespace subtype {
              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Data, cnm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, heightIonosphericLayer),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, snm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsDegree),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsOrder),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Data__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, getCnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getHeightIonosphericLayer, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsDegree, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsOrder, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, setCnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setHeightIonosphericLayer, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsDegree, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsOrder, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Data)[] = {
                { Py_tp_methods, t_SsrIm201Data__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Data_init_ },
                { Py_tp_getset, t_SsrIm201Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIm201Data, t_SsrIm201Data, SsrIm201Data);

              void t_SsrIm201Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Data), &PY_TYPE_DEF(SsrIm201Data), module, "SsrIm201Data", 0);
              }

              void t_SsrIm201Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "class_", make_descriptor(SsrIm201Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "wrapfn_", make_descriptor(t_SsrIm201Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Data::wrap_Object(SsrIm201Data(((t_SsrIm201Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Data object((jobject) NULL);

                INT_CALL(object = SsrIm201Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getCnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getSnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setCnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHeightIonosphericLayer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHeightIonosphericLayer", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setSnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsDegree", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsOrder(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsOrder", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getCnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setCnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "cnm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHeightIonosphericLayer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "heightIonosphericLayer", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getSnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setSnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "snm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsDegree", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsOrder(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsOrder", arg);
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
#include "org/orekit/files/general/PythonAttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileWriter::mids$ = NULL;
        bool PythonAttitudeEphemerisFileWriter::live$ = false;

        jclass PythonAttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_14fbf989f0a2cdb3] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileWriter::PythonAttitudeEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonAttitudeEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAttitudeEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAttitudeEphemerisFileWriter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileWriter, t_PythonAttitudeEphemerisFileWriter, PythonAttitudeEphemerisFileWriter);

        void t_PythonAttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileWriter), &PY_TYPE_DEF(PythonAttitudeEphemerisFileWriter), module, "PythonAttitudeEphemerisFileWriter", 1);
        }

        void t_PythonAttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "class_", make_descriptor(PythonAttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V", (void *) t_PythonAttitudeEphemerisFileWriter_write1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileWriter::wrap_Object(PythonAttitudeEphemerisFileWriter(((t_PythonAttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(::org::orekit::files::general::AttitudeEphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *CorrectionApplied::class$ = NULL;
            jmethodID *CorrectionApplied::mids$ = NULL;
            bool CorrectionApplied::live$ = false;
            CorrectionApplied *CorrectionApplied::NO = NULL;
            CorrectionApplied *CorrectionApplied::YES = NULL;

            jclass CorrectionApplied::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/CorrectionApplied");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_6428228b1ec84cd6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_values_aa8cb326f20a381f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new CorrectionApplied(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                YES = new CorrectionApplied(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CorrectionApplied CorrectionApplied::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CorrectionApplied(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6428228b1ec84cd6], a0.this$));
            }

            JArray< CorrectionApplied > CorrectionApplied::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CorrectionApplied >(env->callStaticObjectMethod(cls, mids$[mid_values_aa8cb326f20a381f]));
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
            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args);
            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CorrectionApplied_values(PyTypeObject *type);
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data);
            static PyGetSetDef t_CorrectionApplied__fields_[] = {
              DECLARE_GET_FIELD(t_CorrectionApplied, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CorrectionApplied__methods_[] = {
              DECLARE_METHOD(t_CorrectionApplied, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, of_, METH_VARARGS),
              DECLARE_METHOD(t_CorrectionApplied, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CorrectionApplied)[] = {
              { Py_tp_methods, t_CorrectionApplied__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CorrectionApplied__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CorrectionApplied)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CorrectionApplied, t_CorrectionApplied, CorrectionApplied);
            PyObject *t_CorrectionApplied::wrap_Object(const CorrectionApplied& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CorrectionApplied::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CorrectionApplied::install(PyObject *module)
            {
              installType(&PY_TYPE(CorrectionApplied), &PY_TYPE_DEF(CorrectionApplied), module, "CorrectionApplied", 0);
            }

            void t_CorrectionApplied::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "class_", make_descriptor(CorrectionApplied::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "wrapfn_", make_descriptor(t_CorrectionApplied::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "boxfn_", make_descriptor(boxObject));
              env->getClass(CorrectionApplied::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "NO", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "YES", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::YES)));
            }

            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CorrectionApplied::initializeClass, 1)))
                return NULL;
              return t_CorrectionApplied::wrap_Object(CorrectionApplied(((t_CorrectionApplied *) arg)->object.this$));
            }
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CorrectionApplied::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CorrectionApplied result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::valueOf(a0));
                return t_CorrectionApplied::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CorrectionApplied_values(PyTypeObject *type)
            {
              JArray< CorrectionApplied > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::values());
              return JArray<jobject>(result.this$).wrap(t_CorrectionApplied::wrap_jobject);
            }
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLegendreRuleFactory::class$ = NULL;
          jmethodID *FieldLegendreRuleFactory::mids$ = NULL;
          bool FieldLegendreRuleFactory::live$ = false;

          jclass FieldLegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLegendreRuleFactory::FieldLegendreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLegendreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_c07c8b9364272960], a0));
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
          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args);
          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLegendreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLegendreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLegendreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLegendreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLegendreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLegendreRuleFactory, t_FieldLegendreRuleFactory, FieldLegendreRuleFactory);
          PyObject *t_FieldLegendreRuleFactory::wrap_Object(const FieldLegendreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLegendreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLegendreRuleFactory), &PY_TYPE_DEF(FieldLegendreRuleFactory), module, "FieldLegendreRuleFactory", 0);
          }

          void t_FieldLegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "class_", make_descriptor(FieldLegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "wrapfn_", make_descriptor(t_FieldLegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLegendreRuleFactory::wrap_Object(FieldLegendreRuleFactory(((t_FieldLegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLegendreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLegendreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data)
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
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagator::class$ = NULL;
        jmethodID *GLONASSNumericalPropagator::mids$ = NULL;
        bool GLONASSNumericalPropagator::live$ = false;

        jclass GLONASSNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_49c84b5f74ac8df1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/data/DataContext;Z)V");
            mids$[mid_getGLONASSOrbitalElements_96e04bba8548a588] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
            mids$[mid_propagate_1e982279849c3b65] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_createMapper_5f8935bd082b8966] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_97764934e3fe735c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagator::GLONASSNumericalPropagator(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::attitudes::AttitudeProvider & a3, jdouble a4, const ::org::orekit::data::DataContext & a5, jboolean a6) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_49c84b5f74ac8df1, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

        ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSNumericalPropagator::getGLONASSOrbitalElements() const
        {
          return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_96e04bba8548a588]));
        }

        ::org::orekit::propagation::SpacecraftState GLONASSNumericalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_1e982279849c3b65], a0.this$));
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
      namespace numerical {
        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self);
        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args);
        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data);
        static PyGetSetDef t_GLONASSNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_GLONASSNumericalPropagator, gLONASSOrbitalElements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GLONASSNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagator)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagator_init_ },
          { Py_tp_getset, t_GLONASSNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagator, t_GLONASSNumericalPropagator, GLONASSNumericalPropagator);

        void t_GLONASSNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagator), &PY_TYPE_DEF(GLONASSNumericalPropagator), module, "GLONASSNumericalPropagator", 0);
        }

        void t_GLONASSNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "class_", make_descriptor(GLONASSNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagator::wrap_Object(GLONASSNumericalPropagator(((t_GLONASSNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
          jdouble a4;
          ::org::orekit::data::DataContext a5((jobject) NULL);
          jboolean a6;
          GLONASSNumericalPropagator object((jobject) NULL);

          if (!parseArgs(args, "kkkkDkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = GLONASSNumericalPropagator(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
          OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GLONASSNumericalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
          OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/EigenDecompositionNonSymmetric.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionNonSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionNonSymmetric::mids$ = NULL;
      bool EigenDecompositionNonSymmetric::live$ = false;
      jdouble EigenDecompositionNonSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionNonSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionNonSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_dc02fdb8767f32bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getD_b2eebabce70526d8] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getDeterminant_847706ebd9444ecb] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalue_1e8f748d6dce69c5] = env->getMethodID(cls, "getEigenvalue", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalues_6bea1b718c2aa50b] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_229c51f1f7aa44e3] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getEpsilon_9981f74b2d109da6] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getV_b2eebabce70526d8] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVInv_b2eebabce70526d8] = env->getMethodID(cls, "getVInv", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc02fdb8767f32bc, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getD() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getD_b2eebabce70526d8]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getDeterminant() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getDeterminant_847706ebd9444ecb]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getEigenvalue(jint a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getEigenvalue_1e8f748d6dce69c5], a0));
      }

      JArray< ::org::hipparchus::complex::Complex > EigenDecompositionNonSymmetric::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_6bea1b718c2aa50b]));
      }

      ::org::hipparchus::linear::FieldVector EigenDecompositionNonSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_229c51f1f7aa44e3], a0));
      }

      jdouble EigenDecompositionNonSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_9981f74b2d109da6]);
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getVInv() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVInv_b2eebabce70526d8]));
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
      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionNonSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, vInv),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionNonSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getVInv, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionNonSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionNonSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionNonSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionNonSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionNonSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionNonSymmetric, t_EigenDecompositionNonSymmetric, EigenDecompositionNonSymmetric);

      void t_EigenDecompositionNonSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionNonSymmetric), &PY_TYPE_DEF(EigenDecompositionNonSymmetric), module, "EigenDecompositionNonSymmetric", 0);
      }

      void t_EigenDecompositionNonSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "class_", make_descriptor(EigenDecompositionNonSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionNonSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionNonSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionNonSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionNonSymmetric::wrap_Object(EigenDecompositionNonSymmetric(((t_EigenDecompositionNonSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0, a1));
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

      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::complex::Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockPhaseModifier::mids$ = NULL;
          bool RelativisticClockPhaseModifier::live$ = false;

          jclass RelativisticClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockPhaseModifier::RelativisticClockPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::java::util::List RelativisticClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_RelativisticClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockPhaseModifier_init_(t_RelativisticClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockPhaseModifier_getParametersDrivers(t_RelativisticClockPhaseModifier *self);
          static PyObject *t_RelativisticClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockPhaseModifier_get__parametersDrivers(t_RelativisticClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockPhaseModifier, t_RelativisticClockPhaseModifier, RelativisticClockPhaseModifier);

          void t_RelativisticClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockPhaseModifier), &PY_TYPE_DEF(RelativisticClockPhaseModifier), module, "RelativisticClockPhaseModifier", 0);
          }

          void t_RelativisticClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "class_", make_descriptor(RelativisticClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockPhaseModifier::wrap_Object(RelativisticClockPhaseModifier(((t_RelativisticClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockPhaseModifier_init_(t_RelativisticClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockPhaseModifier_getParametersDrivers(t_RelativisticClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockPhaseModifier_get__parametersDrivers(t_RelativisticClockPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AdditionalDerivativesProvider::class$ = NULL;
        jmethodID *AdditionalDerivativesProvider::mids$ = NULL;
        bool AdditionalDerivativesProvider::live$ = false;

        jclass AdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_3642c368f508585f] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_yields_34f098c1d43e614c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::CombinedDerivatives AdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_3642c368f508585f], a0.this$));
        }

        jint AdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        ::java::lang::String AdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        void AdditionalDerivativesProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        jboolean AdditionalDerivativesProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_34f098c1d43e614c], a0.this$);
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
      namespace integration {
        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data);
        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_AdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_AdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_AdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdditionalDerivativesProvider, t_AdditionalDerivativesProvider, AdditionalDerivativesProvider);

        void t_AdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AdditionalDerivativesProvider), &PY_TYPE_DEF(AdditionalDerivativesProvider), module, "AdditionalDerivativesProvider", 0);
        }

        void t_AdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "class_", make_descriptor(AdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_AdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_AdditionalDerivativesProvider::wrap_Object(AdditionalDerivativesProvider(((t_AdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.yields(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "yields", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractSingleFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractSingleFrequencyCombination::mids$ = NULL;
          bool PythonAbstractSingleFrequencyCombination::live$ = false;

          jclass PythonAbstractSingleFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_43eea351c64a25e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedValue_82f92590f4247da1] = env->getMethodID(cls, "getCombinedValue", "(DD)D");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractSingleFrequencyCombination::PythonAbstractSingleFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_43eea351c64a25e1, a0.this$, a1.this$)) {}

          void PythonAbstractSingleFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractSingleFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractSingleFrequencyCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonAbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractSingleFrequencyCombination_init_(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_finalize(t_PythonAbstractSingleFrequencyCombination *self);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_pythonExtension(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractSingleFrequencyCombination_getCombinedValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
          static void JNICALL t_PythonAbstractSingleFrequencyCombination_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_get__self(t_PythonAbstractSingleFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractSingleFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractSingleFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractSingleFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSingleFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractSingleFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractSingleFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractSingleFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractSingleFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractSingleFrequencyCombination, t_PythonAbstractSingleFrequencyCombination, PythonAbstractSingleFrequencyCombination);

          void t_PythonAbstractSingleFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractSingleFrequencyCombination), &PY_TYPE_DEF(PythonAbstractSingleFrequencyCombination), module, "PythonAbstractSingleFrequencyCombination", 1);
          }

          void t_PythonAbstractSingleFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "class_", make_descriptor(PythonAbstractSingleFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractSingleFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractSingleFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedValue", "(DD)D", (void *) t_PythonAbstractSingleFrequencyCombination_getCombinedValue0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractSingleFrequencyCombination_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractSingleFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractSingleFrequencyCombination::wrap_Object(PythonAbstractSingleFrequencyCombination(((t_PythonAbstractSingleFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractSingleFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractSingleFrequencyCombination_init_(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractSingleFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractSingleFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractSingleFrequencyCombination_finalize(t_PythonAbstractSingleFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_pythonExtension(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractSingleFrequencyCombination_getCombinedValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dd", (double) a0, (double) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonAbstractSingleFrequencyCombination_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_get__self(t_PythonAbstractSingleFrequencyCombination *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGooding.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGooding::class$ = NULL;
        jmethodID *IodGooding::mids$ = NULL;
        bool IodGooding::live$ = false;

        jclass IodGooding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGooding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_7c38167c6cfc9226] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_a7ad1dfd1fc6b1e2] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_1bee896f34ec2833] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_471b4e00d9b61ff5] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_c96402b9179b7bb5] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_a768e5f1bf2e0513] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getRange1_9981f74b2d109da6] = env->getMethodID(cls, "getRange1", "()D");
            mids$[mid_getRange2_9981f74b2d109da6] = env->getMethodID(cls, "getRange2", "()D");
            mids$[mid_getRange3_9981f74b2d109da6] = env->getMethodID(cls, "getRange3", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGooding::IodGooding(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_7c38167c6cfc9226], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a7ad1dfd1fc6b1e2], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_1bee896f34ec2833], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_471b4e00d9b61ff5], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_c96402b9179b7bb5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11, jint a12, jboolean a13) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a768e5f1bf2e0513], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11, a12, a13));
        }

        jdouble IodGooding::getRange1() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange1_9981f74b2d109da6]);
        }

        jdouble IodGooding::getRange2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange2_9981f74b2d109da6]);
        }

        jdouble IodGooding::getRange3() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange3_9981f74b2d109da6]);
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
      namespace iod {
        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args);
        static PyObject *t_IodGooding_getRange1(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange2(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange3(t_IodGooding *self);
        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data);
        static PyGetSetDef t_IodGooding__fields_[] = {
          DECLARE_GET_FIELD(t_IodGooding, range1),
          DECLARE_GET_FIELD(t_IodGooding, range2),
          DECLARE_GET_FIELD(t_IodGooding, range3),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IodGooding__methods_[] = {
          DECLARE_METHOD(t_IodGooding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, estimate, METH_VARARGS),
          DECLARE_METHOD(t_IodGooding, getRange1, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange2, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange3, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGooding)[] = {
          { Py_tp_methods, t_IodGooding__methods_ },
          { Py_tp_init, (void *) t_IodGooding_init_ },
          { Py_tp_getset, t_IodGooding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGooding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGooding, t_IodGooding, IodGooding);

        void t_IodGooding::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGooding), &PY_TYPE_DEF(IodGooding), module, "IodGooding", 0);
        }

        void t_IodGooding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "class_", make_descriptor(IodGooding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "wrapfn_", make_descriptor(t_IodGooding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGooding::initializeClass, 1)))
            return NULL;
          return t_IodGooding::wrap_Object(IodGooding(((t_IodGooding *) arg)->object.this$));
        }
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGooding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGooding object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGooding(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDD", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 14:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              jint a12;
              jboolean a13;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_IodGooding_getRange1(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange1());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange2(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange2());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange3(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange3());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange1());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange3());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/AbstractUnscentedTransform.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *AbstractUnscentedTransform::class$ = NULL;
      jmethodID *AbstractUnscentedTransform::mids$ = NULL;
      bool AbstractUnscentedTransform::live$ = false;

      jclass AbstractUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/AbstractUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_unscentedTransform_3f6076288b354811] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_9981f74b2d109da6] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractUnscentedTransform::AbstractUnscentedTransform(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      JArray< ::org::hipparchus::linear::RealVector > AbstractUnscentedTransform::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_3f6076288b354811], a0.this$, a1.this$));
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
      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args);

      static PyMethodDef t_AbstractUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_AbstractUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractUnscentedTransform)[] = {
        { Py_tp_methods, t_AbstractUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_AbstractUnscentedTransform_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractUnscentedTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractUnscentedTransform, t_AbstractUnscentedTransform, AbstractUnscentedTransform);

      void t_AbstractUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractUnscentedTransform), &PY_TYPE_DEF(AbstractUnscentedTransform), module, "AbstractUnscentedTransform", 0);
      }

      void t_AbstractUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "class_", make_descriptor(AbstractUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "wrapfn_", make_descriptor(t_AbstractUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_AbstractUnscentedTransform::wrap_Object(AbstractUnscentedTransform(((t_AbstractUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        AbstractUnscentedTransform object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = AbstractUnscentedTransform(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStepHandler::class$ = NULL;
        jmethodID *ODEStepHandler::mids$ = NULL;
        bool ODEStepHandler::live$ = false;

        jclass ODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_6bfc236263cc281c] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_4f79f5048423f318] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepHandler::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_6bfc236263cc281c], a0.this$);
        }

        void ODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_4f79f5048423f318], a0.this$);
        }

        void ODEStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
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
      namespace sampling {
        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepHandler)[] = {
          { Py_tp_methods, t_ODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepHandler, t_ODEStepHandler, ODEStepHandler);

        void t_ODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepHandler), &PY_TYPE_DEF(ODEStepHandler), module, "ODEStepHandler", 0);
        }

        void t_ODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "class_", make_descriptor(ODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "wrapfn_", make_descriptor(t_ODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepHandler::wrap_Object(ODEStepHandler(((t_ODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/EcksteinHechlerPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *EcksteinHechlerPropagator::class$ = NULL;
        jmethodID *EcksteinHechlerPropagator::mids$ = NULL;
        bool EcksteinHechlerPropagator::live$ = false;

        jclass EcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/EcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4bca5d056f2171ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_21b8c4d4301056aa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_b347ebba1de9fc04] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_6c9c4264b15be175] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_27bad39efbcf702c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_62d0cc98427b4eb5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_f8627afae6f0c6f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_68d82ef50a685172] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_c5477237f92cb418] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_32e9d1e950a78bc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_9facbb2d63b09a07] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_5a6b3e62be7f2c62] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_90f710ee9427b6d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_1a7ee5bda9a1c74a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_956b7e40617b376c] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_0eb73714067621de] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_956d95065efaec5f] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_getCk0_be783177b060994b] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getReferenceRadius_9981f74b2d109da6] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_9c4726700f694a3c] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/CartesianOrbit;");
            mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_3f94e7a0a2844a08] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_5463628f1a7002e0] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_createHarvester_d0aee1b2c15f4d53] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_resetIntermediateState_5ecf00e07ef54854] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_4bca5d056f2171ab, a0.this$, a1.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_21b8c4d4301056aa, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b347ebba1de9fc04, a0.this$, a1, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6c9c4264b15be175, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_27bad39efbcf702c, a0.this$, a1.this$, a2, a3.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_62d0cc98427b4eb5, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f8627afae6f0c6f2, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_68d82ef50a685172, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c5477237f92cb418, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_32e9d1e950a78bc0, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9facbb2d63b09a07, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5a6b3e62be7f2c62, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_90f710ee9427b6d0, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_1a7ee5bda9a1c74a, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_956b7e40617b376c], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_0eb73714067621de], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_956d95065efaec5f], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > EcksteinHechlerPropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_be783177b060994b]));
        }

        jdouble EcksteinHechlerPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        jdouble EcksteinHechlerPropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_9981f74b2d109da6]);
        }

        ::org::orekit::orbits::CartesianOrbit EcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_9c4726700f694a3c], a0.this$));
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_3f94e7a0a2844a08], a0.this$, a1.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_5463628f1a7002e0], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_EcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, ck0),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, mu),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, referenceRadius),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getCk0, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getReferenceRadius, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, propagateOrbit, METH_O),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_EcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagator, t_EcksteinHechlerPropagator, EcksteinHechlerPropagator);

        void t_EcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagator), &PY_TYPE_DEF(EcksteinHechlerPropagator), module, "EcksteinHechlerPropagator", 0);
        }

        void t_EcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "class_", make_descriptor(EcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagator::wrap_Object(EcksteinHechlerPropagator(((t_EcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
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
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDKDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDDI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCk0());
          return result.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0));
            return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", arg);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "kKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCk0());
          return value.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader::live$ = false;

      jclass UTCTAIHistoryFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_f44b5b919beca6bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_d751c1a57012b438] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader(const ::org::orekit::data::DataProvidersManager & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f44b5b919beca6bf, a0.this$)) {}

      ::java::util::List UTCTAIHistoryFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_d751c1a57012b438]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self);

      static PyMethodDef t_UTCTAIHistoryFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader, t_UTCTAIHistoryFilesLoader, UTCTAIHistoryFilesLoader);

      void t_UTCTAIHistoryFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader), module, "UTCTAIHistoryFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser)));
      }

      void t_UTCTAIHistoryFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "class_", make_descriptor(UTCTAIHistoryFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader::wrap_Object(UTCTAIHistoryFilesLoader(((t_UTCTAIHistoryFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            INT_CALL(object = UTCTAIHistoryFilesLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
            {
              INT_CALL(object = UTCTAIHistoryFilesLoader(a0));
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

      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/FESCHatEpsilonReader.h"
#include "java/util/Map.h"
#include "java/io/IOException.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/lang/Double.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCHatEpsilonReader::class$ = NULL;
          jmethodID *FESCHatEpsilonReader::mids$ = NULL;
          bool FESCHatEpsilonReader::live$ = false;

          jclass FESCHatEpsilonReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCHatEpsilonReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b060ec314fb355d2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;Ljava/util/Map;)V");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCHatEpsilonReader::FESCHatEpsilonReader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a3, const ::java::util::Map & a4) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_b060ec314fb355d2, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          void FESCHatEpsilonReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
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
          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args);

          static PyMethodDef t_FESCHatEpsilonReader__methods_[] = {
            DECLARE_METHOD(t_FESCHatEpsilonReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCHatEpsilonReader)[] = {
            { Py_tp_methods, t_FESCHatEpsilonReader__methods_ },
            { Py_tp_init, (void *) t_FESCHatEpsilonReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCHatEpsilonReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCHatEpsilonReader, t_FESCHatEpsilonReader, FESCHatEpsilonReader);

          void t_FESCHatEpsilonReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCHatEpsilonReader), &PY_TYPE_DEF(FESCHatEpsilonReader), module, "FESCHatEpsilonReader", 0);
          }

          void t_FESCHatEpsilonReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "class_", make_descriptor(FESCHatEpsilonReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "wrapfn_", make_descriptor(t_FESCHatEpsilonReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCHatEpsilonReader::initializeClass, 1)))
              return NULL;
            return t_FESCHatEpsilonReader::wrap_Object(FESCHatEpsilonReader(((t_FESCHatEpsilonReader *) arg)->object.this$));
          }
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCHatEpsilonReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::Map a4((jobject) NULL);
            PyTypeObject **p4;
            FESCHatEpsilonReader object((jobject) NULL);

            if (!parseArgs(args, "sDDKK", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_, &a4, &p4, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FESCHatEpsilonReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCHatEpsilonReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldBooleanDetector::class$ = NULL;
        jmethodID *FieldBooleanDetector::mids$ = NULL;
        bool FieldBooleanDetector::live$ = false;

        jclass FieldBooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldBooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_437483fdb5fbc118] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_andCombine_7a2dcd43c0dcb74b] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetectors_d751c1a57012b438] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_notCombine_5e5ccefffb9fc67a] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldNegateDetector;");
            mids$[mid_orCombine_437483fdb5fbc118] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_orCombine_7a2dcd43c0dcb74b] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_create_120ce78a715a425b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldBooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_437483fdb5fbc118], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_7a2dcd43c0dcb74b], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBooleanDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::java::util::List FieldBooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_d751c1a57012b438]));
        }

        void FieldBooleanDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::FieldNegateDetector FieldBooleanDetector::notCombine(const ::org::orekit::propagation::events::FieldEventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::FieldNegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_5e5ccefffb9fc67a], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_437483fdb5fbc118], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_7a2dcd43c0dcb74b], a0.this$));
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
        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self);
        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data);
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data);
        static PyGetSetDef t_FieldBooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBooleanDetector, detectors),
          DECLARE_GET_FIELD(t_FieldBooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBooleanDetector__methods_[] = {
          DECLARE_METHOD(t_FieldBooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBooleanDetector)[] = {
          { Py_tp_methods, t_FieldBooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldBooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldBooleanDetector, t_FieldBooleanDetector, FieldBooleanDetector);
        PyObject *t_FieldBooleanDetector::wrap_Object(const FieldBooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBooleanDetector), &PY_TYPE_DEF(FieldBooleanDetector), module, "FieldBooleanDetector", 0);
        }

        void t_FieldBooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "class_", make_descriptor(FieldBooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "wrapfn_", make_descriptor(t_FieldBooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBooleanDetector::initializeClass, 1)))
            return NULL;
          return t_FieldBooleanDetector::wrap_Object(FieldBooleanDetector(((t_FieldBooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldNegateDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_FieldNegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/CombinatoricsUtils.h"
#include "java/util/Iterator.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils::class$ = NULL;
      jmethodID *CombinatoricsUtils::mids$ = NULL;
      bool CombinatoricsUtils::live$ = false;
      jint CombinatoricsUtils::MAX_BELL = (jint) 0;

      jclass CombinatoricsUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bellNumber_3453f750066710ab] = env->getStaticMethodID(cls, "bellNumber", "(I)J");
          mids$[mid_binomialCoefficient_038d815c660e2779] = env->getStaticMethodID(cls, "binomialCoefficient", "(II)J");
          mids$[mid_binomialCoefficientDouble_6d920aab27f0a3d2] = env->getStaticMethodID(cls, "binomialCoefficientDouble", "(II)D");
          mids$[mid_binomialCoefficientLog_6d920aab27f0a3d2] = env->getStaticMethodID(cls, "binomialCoefficientLog", "(II)D");
          mids$[mid_checkBinomial_b5d23e6c0858e8ed] = env->getStaticMethodID(cls, "checkBinomial", "(II)V");
          mids$[mid_combinationsIterator_952e72b43add17d6] = env->getStaticMethodID(cls, "combinationsIterator", "(II)Ljava/util/Iterator;");
          mids$[mid_factorial_3453f750066710ab] = env->getStaticMethodID(cls, "factorial", "(I)J");
          mids$[mid_factorialDouble_ce4c02d583456bc9] = env->getStaticMethodID(cls, "factorialDouble", "(I)D");
          mids$[mid_factorialLog_ce4c02d583456bc9] = env->getStaticMethodID(cls, "factorialLog", "(I)D");
          mids$[mid_partitions_951f9571abe096f0] = env->getStaticMethodID(cls, "partitions", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_permutations_951f9571abe096f0] = env->getStaticMethodID(cls, "permutations", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_stirlingS2_038d815c660e2779] = env->getStaticMethodID(cls, "stirlingS2", "(II)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MAX_BELL = env->getStaticIntField(cls, "MAX_BELL");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jlong CombinatoricsUtils::bellNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_bellNumber_3453f750066710ab], a0);
      }

      jlong CombinatoricsUtils::binomialCoefficient(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_binomialCoefficient_038d815c660e2779], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientDouble(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientDouble_6d920aab27f0a3d2], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientLog(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientLog_6d920aab27f0a3d2], a0, a1);
      }

      void CombinatoricsUtils::checkBinomial(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkBinomial_b5d23e6c0858e8ed], a0, a1);
      }

      ::java::util::Iterator CombinatoricsUtils::combinationsIterator(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_combinationsIterator_952e72b43add17d6], a0, a1));
      }

      jlong CombinatoricsUtils::factorial(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_factorial_3453f750066710ab], a0);
      }

      jdouble CombinatoricsUtils::factorialDouble(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialDouble_ce4c02d583456bc9], a0);
      }

      jdouble CombinatoricsUtils::factorialLog(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialLog_ce4c02d583456bc9], a0);
      }

      ::java::util::stream::Stream CombinatoricsUtils::partitions(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_partitions_951f9571abe096f0], a0.this$));
      }

      ::java::util::stream::Stream CombinatoricsUtils::permutations(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_permutations_951f9571abe096f0], a0.this$));
      }

      jlong CombinatoricsUtils::stirlingS2(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_stirlingS2_038d815c660e2779], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_CombinatoricsUtils__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, bellNumber, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficient, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, checkBinomial, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, combinationsIterator, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorial, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialDouble, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialLog, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, partitions, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, permutations, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, stirlingS2, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils)[] = {
        { Py_tp_methods, t_CombinatoricsUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils, t_CombinatoricsUtils, CombinatoricsUtils);

      void t_CombinatoricsUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils), &PY_TYPE_DEF(CombinatoricsUtils), module, "CombinatoricsUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "FactorialLog", make_descriptor(&PY_TYPE_DEF(CombinatoricsUtils$FactorialLog)));
      }

      void t_CombinatoricsUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "class_", make_descriptor(CombinatoricsUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "wrapfn_", make_descriptor(t_CombinatoricsUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(CombinatoricsUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "MAX_BELL", make_descriptor(CombinatoricsUtils::MAX_BELL));
      }

      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils::wrap_Object(CombinatoricsUtils(((t_CombinatoricsUtils *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::bellNumber(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "bellNumber", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficient(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficient", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientDouble(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientDouble", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientLog(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientLog", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CombinatoricsUtils::checkBinomial(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkBinomial", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::combinationsIterator(a0, a1));
          return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
        }

        PyErr_SetArgsError(type, "combinationsIterator", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorial(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "factorial", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialDouble(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialDouble", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialLog(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialLog", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::partitions(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "partitions", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::permutations(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "permutations", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::stirlingS2(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "stirlingS2", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarN::class$ = NULL;
          jmethodID *CopolarN::mids$ = NULL;
          bool CopolarN::live$ = false;

          jclass CopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_9981f74b2d109da6] = env->getMethodID(cls, "cn", "()D");
              mids$[mid_dn_9981f74b2d109da6] = env->getMethodID(cls, "dn", "()D");
              mids$[mid_sn_9981f74b2d109da6] = env->getMethodID(cls, "sn", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarN::cn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cn_9981f74b2d109da6]);
          }

          jdouble CopolarN::dn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dn_9981f74b2d109da6]);
          }

          jdouble CopolarN::sn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sn_9981f74b2d109da6]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_cn(t_CopolarN *self);
          static PyObject *t_CopolarN_dn(t_CopolarN *self);
          static PyObject *t_CopolarN_sn(t_CopolarN *self);

          static PyMethodDef t_CopolarN__methods_[] = {
            DECLARE_METHOD(t_CopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarN)[] = {
            { Py_tp_methods, t_CopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarN, t_CopolarN, CopolarN);

          void t_CopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarN), &PY_TYPE_DEF(CopolarN), module, "CopolarN", 0);
          }

          void t_CopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "class_", make_descriptor(CopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "wrapfn_", make_descriptor(t_CopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarN::initializeClass, 1)))
              return NULL;
            return t_CopolarN::wrap_Object(CopolarN(((t_CopolarN *) arg)->object.this$));
          }
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarN_cn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_dn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_sn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sn());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBody::class$ = NULL;
      jmethodID *CelestialBody::mids$ = NULL;
      bool CelestialBody::live$ = false;

      jclass CelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyOrientedFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_9981f74b2d109da6] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame CelestialBody::getBodyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyOrientedFrame_cb151471db4570f0]));
      }

      jdouble CelestialBody::getGM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGM_9981f74b2d109da6]);
      }

      ::org::orekit::frames::Frame CelestialBody::getInertiallyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertiallyOrientedFrame_cb151471db4570f0]));
      }

      ::java::lang::String CelestialBody::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
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
      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getName(t_CelestialBody *self);
      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data);
      static PyGetSetDef t_CelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBody, bodyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, gM),
        DECLARE_GET_FIELD(t_CelestialBody, inertiallyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBody__methods_[] = {
        DECLARE_METHOD(t_CelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, getBodyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getGM, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getInertiallyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBody)[] = {
        { Py_tp_methods, t_CelestialBody__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBody)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(CelestialBody, t_CelestialBody, CelestialBody);

      void t_CelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBody), &PY_TYPE_DEF(CelestialBody), module, "CelestialBody", 0);
      }

      void t_CelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "class_", make_descriptor(CelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "wrapfn_", make_descriptor(t_CelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBody::initializeClass, 1)))
          return NULL;
        return t_CelestialBody::wrap_Object(CelestialBody(((t_CelestialBody *) arg)->object.this$));
      }
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getName(t_CelestialBody *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data)
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
#include "org/hipparchus/linear/RealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector::class$ = NULL;
      jmethodID *RealVector::mids$ = NULL;
      bool RealVector::live$ = false;

      jclass RealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_bf8d75e459632544] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_addToEntry_4320462275d66e78] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_bf8d75e459632544] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_2fd46ead8ae05f47] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_7bd6dbc1df2b3199] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combineToSelf_7bd6dbc1df2b3199] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_copy_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_cosine_510dfb60b80a1bc5] = env->getMethodID(cls, "cosine", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_dotProduct_510dfb60b80a1bc5] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_bf8d75e459632544] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_ebeMultiply_bf8d75e459632544] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_510dfb60b80a1bc5] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_ce4c02d583456bc9] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_510dfb60b80a1bc5] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_9981f74b2d109da6] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_510dfb60b80a1bc5] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_9981f74b2d109da6] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getMaxIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIndex", "()I");
          mids$[mid_getMaxValue_9981f74b2d109da6] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMinIndex", "()I");
          mids$[mid_getMinValue_9981f74b2d109da6] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getNorm_9981f74b2d109da6] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_b1d2e600b579c4fa] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
          mids$[mid_map_04dd574c30a3533b] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAdd_2fd46ead8ae05f47] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAddToSelf_2fd46ead8ae05f47] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivide_2fd46ead8ae05f47] = env->getMethodID(cls, "mapDivide", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_2fd46ead8ae05f47] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiply_2fd46ead8ae05f47] = env->getMethodID(cls, "mapMultiply", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_2fd46ead8ae05f47] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtract_2fd46ead8ae05f47] = env->getMethodID(cls, "mapSubtract", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_2fd46ead8ae05f47] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_04dd574c30a3533b] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_outerProduct_628dcdd789dfced9] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_projection_bf8d75e459632544] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_set_1ad26e8c8c0cd65b] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_4320462275d66e78] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_543485b1a87e5329] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_bf8d75e459632544] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_be783177b060994b] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unitize_ff7cb6c242604316] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_unmodifiableRealVector_bf8d75e459632544] = env->getStaticMethodID(cls, "unmodifiableRealVector", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_walkInDefaultOrder_8785ef13fe18157c] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_5b6053a1b36387e3] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_a2c6d27191254d22] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_710a99d12629b412] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_8785ef13fe18157c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5b6053a1b36387e3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_a2c6d27191254d22] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_710a99d12629b412] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkVectorDimensions_8fd427ab23829bf5] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkVectorDimensions_99bb541b0ecf3230] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkIndices_b5d23e6c0858e8ed] = env->getMethodID(cls, "checkIndices", "(II)V");
          mids$[mid_checkIndex_8fd427ab23829bf5] = env->getMethodID(cls, "checkIndex", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector::RealVector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      RealVector RealVector::add(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_add_bf8d75e459632544], a0.this$));
      }

      void RealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_4320462275d66e78], a0, a1);
      }

      RealVector RealVector::append(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_bf8d75e459632544], a0.this$));
      }

      RealVector RealVector::append(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::combine(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combine_7bd6dbc1df2b3199], a0, a1, a2.this$));
      }

      RealVector RealVector::combineToSelf(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_7bd6dbc1df2b3199], a0, a1, a2.this$));
      }

      RealVector RealVector::copy() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_copy_92d7e8d8d3f1dfcf]));
      }

      jdouble RealVector::cosine(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosine_510dfb60b80a1bc5], a0.this$);
      }

      jdouble RealVector::dotProduct(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_510dfb60b80a1bc5], a0.this$);
      }

      RealVector RealVector::ebeDivide(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_bf8d75e459632544], a0.this$));
      }

      RealVector RealVector::ebeMultiply(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_bf8d75e459632544], a0.this$));
      }

      jboolean RealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jint RealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      jdouble RealVector::getDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble RealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_ce4c02d583456bc9], a0);
      }

      jdouble RealVector::getL1Distance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble RealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_9981f74b2d109da6]);
      }

      jdouble RealVector::getLInfDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble RealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_9981f74b2d109da6]);
      }

      jint RealVector::getMaxIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIndex_d6ab429752e7c267]);
      }

      jdouble RealVector::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_9981f74b2d109da6]);
      }

      jint RealVector::getMinIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinIndex_d6ab429752e7c267]);
      }

      jdouble RealVector::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_9981f74b2d109da6]);
      }

      jdouble RealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_9981f74b2d109da6]);
      }

      RealVector RealVector::getSubVector(jint a0, jint a1) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_b1d2e600b579c4fa], a0, a1));
      }

      jint RealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jboolean RealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
      }

      jboolean RealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
      }

      ::java::util::Iterator RealVector::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
      }

      RealVector RealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_map_04dd574c30a3533b], a0.this$));
      }

      RealVector RealVector::mapAdd(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::mapAddToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::mapDivide(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivide_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::mapDivideToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::mapMultiply(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::mapSubtract(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::mapSubtractToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_2fd46ead8ae05f47], a0));
      }

      RealVector RealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_04dd574c30a3533b], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealVector::outerProduct(const RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_628dcdd789dfced9], a0.this$));
      }

      RealVector RealVector::projection(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_projection_bf8d75e459632544], a0.this$));
      }

      void RealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_1ad26e8c8c0cd65b], a0);
      }

      void RealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_4320462275d66e78], a0, a1);
      }

      void RealVector::setSubVector(jint a0, const RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_543485b1a87e5329], a0, a1.this$);
      }

      ::java::util::Iterator RealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_4f613ccd2f803b4b]));
      }

      RealVector RealVector::subtract(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_subtract_bf8d75e459632544], a0.this$));
      }

      JArray< jdouble > RealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_be783177b060994b]));
      }

      RealVector RealVector::unitVector() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_unitVector_92d7e8d8d3f1dfcf]));
      }

      void RealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_ff7cb6c242604316]);
      }

      RealVector RealVector::unmodifiableRealVector(const RealVector & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVector(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableRealVector_bf8d75e459632544], a0.this$));
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_8785ef13fe18157c], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5b6053a1b36387e3], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_a2c6d27191254d22], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_710a99d12629b412], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_8785ef13fe18157c], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5b6053a1b36387e3], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_a2c6d27191254d22], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_710a99d12629b412], a0.this$, a1, a2);
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
      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_copy(t_RealVector *self);
      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_getDimension(t_RealVector *self);
      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Norm(t_RealVector *self);
      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self);
      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMaxValue(t_RealVector *self);
      static PyObject *t_RealVector_getMinIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMinValue(t_RealVector *self);
      static PyObject *t_RealVector_getNorm(t_RealVector *self);
      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_isInfinite(t_RealVector *self);
      static PyObject *t_RealVector_isNaN(t_RealVector *self);
      static PyObject *t_RealVector_iterator(t_RealVector *self);
      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_sparseIterator(t_RealVector *self);
      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_toArray(t_RealVector *self);
      static PyObject *t_RealVector_unitVector(t_RealVector *self);
      static PyObject *t_RealVector_unitize(t_RealVector *self);
      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data);
      static PyGetSetDef t_RealVector__fields_[] = {
        DECLARE_GET_FIELD(t_RealVector, dimension),
        DECLARE_GET_FIELD(t_RealVector, infinite),
        DECLARE_GET_FIELD(t_RealVector, l1Norm),
        DECLARE_GET_FIELD(t_RealVector, lInfNorm),
        DECLARE_GET_FIELD(t_RealVector, maxIndex),
        DECLARE_GET_FIELD(t_RealVector, maxValue),
        DECLARE_GET_FIELD(t_RealVector, minIndex),
        DECLARE_GET_FIELD(t_RealVector, minValue),
        DECLARE_GET_FIELD(t_RealVector, naN),
        DECLARE_GET_FIELD(t_RealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector__methods_[] = {
        DECLARE_METHOD(t_RealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, add, METH_O),
        DECLARE_METHOD(t_RealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, cosine, METH_O),
        DECLARE_METHOD(t_RealVector, dotProduct, METH_O),
        DECLARE_METHOD(t_RealVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_RealVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getEntry, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Distance, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Norm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getLInfDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getLInfNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, iterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, map, METH_O),
        DECLARE_METHOD(t_RealVector, mapAdd, METH_O),
        DECLARE_METHOD(t_RealVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivide, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, outerProduct, METH_O),
        DECLARE_METHOD(t_RealVector, projection, METH_O),
        DECLARE_METHOD(t_RealVector, set, METH_O),
        DECLARE_METHOD(t_RealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, sparseIterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, subtract, METH_O),
        DECLARE_METHOD(t_RealVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitVector, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitize, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unmodifiableRealVector, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector)[] = {
        { Py_tp_methods, t_RealVector__methods_ },
        { Py_tp_init, (void *) t_RealVector_init_ },
        { Py_tp_getset, t_RealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector, t_RealVector, RealVector);

      void t_RealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector), &PY_TYPE_DEF(RealVector), module, "RealVector", 0);
      }

      void t_RealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "class_", make_descriptor(RealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "wrapfn_", make_descriptor(t_RealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector::initializeClass, 1)))
          return NULL;
        return t_RealVector::wrap_Object(RealVector(((t_RealVector *) arg)->object.this$));
      }
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds)
      {
        RealVector object((jobject) NULL);

        INT_CALL(object = RealVector());
        self->object = object;

        return 0;
      }

      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            RealVector a0((jobject) NULL);
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combine", args);
        return NULL;
      }

      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combineToSelf", args);
        return NULL;
      }

      static PyObject *t_RealVector_copy(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.cosine(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cosine", arg);
        return NULL;
      }

      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_RealVector_getDimension(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL1Distance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Norm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL1Norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLInfDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMaxValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMinIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMinValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_RealVector_isInfinite(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_isNaN(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_iterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_sparseIterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.sparseIterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_toArray(t_RealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }

      static PyObject *t_RealVector_unitVector(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.unitVector());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_unitize(t_RealVector *self)
      {
        OBJ_CALL(self->object.unitize());
        Py_RETURN_NONE;
      }

      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::RealVector::unmodifiableRealVector(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unmodifiableRealVector", arg);
        return NULL;
      }

      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *RegularXmlTokenBuilder::class$ = NULL;
            jmethodID *RegularXmlTokenBuilder::mids$ = NULL;
            bool RegularXmlTokenBuilder::live$ = false;

            jclass RegularXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_bb6f0a25fbefd346] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RegularXmlTokenBuilder::RegularXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::java::util::List RegularXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_bb6f0a25fbefd346], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RegularXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RegularXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RegularXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RegularXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RegularXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RegularXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RegularXmlTokenBuilder, t_RegularXmlTokenBuilder, RegularXmlTokenBuilder);

            void t_RegularXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RegularXmlTokenBuilder), &PY_TYPE_DEF(RegularXmlTokenBuilder), module, "RegularXmlTokenBuilder", 0);
            }

            void t_RegularXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "class_", make_descriptor(RegularXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "wrapfn_", make_descriptor(t_RegularXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RegularXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RegularXmlTokenBuilder::wrap_Object(RegularXmlTokenBuilder(((t_RegularXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RegularXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RegularXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RegularXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/orekit/files/general/PythonEphemerisFileParser.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileParser::class$ = NULL;
        jmethodID *PythonEphemerisFileParser::mids$ = NULL;
        bool PythonEphemerisFileParser::live$ = false;

        jclass PythonEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_6c877fbfda00edef] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileParser::PythonEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEphemerisFileParser::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self);
        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileParser, t_PythonEphemerisFileParser, PythonEphemerisFileParser);

        void t_PythonEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileParser), &PY_TYPE_DEF(PythonEphemerisFileParser), module, "PythonEphemerisFileParser", 1);
        }

        void t_PythonEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "class_", make_descriptor(PythonEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;", (void *) t_PythonEphemerisFileParser_parse0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileParser_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileParser::wrap_Object(PythonEphemerisFileParser(((t_PythonEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::EphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::EphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse", result);
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

        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractNavigationMessage::class$ = NULL;
            jmethodID *AbstractNavigationMessage::mids$ = NULL;
            bool AbstractNavigationMessage::live$ = false;

            jclass AbstractNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_9981f74b2d109da6] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_9981f74b2d109da6] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_9981f74b2d109da6] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_9981f74b2d109da6] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_9981f74b2d109da6] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_9981f74b2d109da6] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_9981f74b2d109da6] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getDeltaN_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaN", "()D");
                mids$[mid_getEpochToc_80e11148db499dda] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getSqrtA_9981f74b2d109da6] = env->getMethodID(cls, "getSqrtA", "()D");
                mids$[mid_getTransmissionTime_9981f74b2d109da6] = env->getMethodID(cls, "getTransmissionTime", "()D");
                mids$[mid_setAf2_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAf2", "(D)V");
                mids$[mid_setCic_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCic", "(D)V");
                mids$[mid_setCis_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCis", "(D)V");
                mids$[mid_setCrc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCrc", "(D)V");
                mids$[mid_setCrs_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCrs", "(D)V");
                mids$[mid_setCuc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCuc", "(D)V");
                mids$[mid_setCus_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCus", "(D)V");
                mids$[mid_setDeltaN_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaN", "(D)V");
                mids$[mid_setEpochToc_8497861b879c83f7] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setIDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIDot", "(D)V");
                mids$[mid_setSqrtA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setTransmissionTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTransmissionTime", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractNavigationMessage::AbstractNavigationMessage(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

            jdouble AbstractNavigationMessage::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getDeltaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN_9981f74b2d109da6]);
            }

            ::org::orekit::time::AbsoluteDate AbstractNavigationMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_80e11148db499dda]));
            }

            jdouble AbstractNavigationMessage::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getSqrtA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSqrtA_9981f74b2d109da6]);
            }

            jdouble AbstractNavigationMessage::getTransmissionTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_9981f74b2d109da6]);
            }

            void AbstractNavigationMessage::setAf2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf2_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setCic(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCic_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setCis(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCis_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setCrc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrc_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setCrs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrs_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setCuc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCuc_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setCus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCus_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setDeltaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_8497861b879c83f7], a0.this$);
            }

            void AbstractNavigationMessage::setIDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIDot_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_1ad26e8c8c0cd65b], a0);
            }

            void AbstractNavigationMessage::setTransmissionTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmissionTime_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data);
            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, af2),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cic),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cis),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crs),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cuc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cus),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, deltaN),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, iDot),
              DECLARE_GET_FIELD(t_AbstractNavigationMessage, meanMotion),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, sqrtA),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, transmissionTime),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getDeltaN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getSqrtA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getTransmissionTime, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, setAf2, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCic, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCis, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrs, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCuc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCus, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setDeltaN, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setIDot, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setSqrtA, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setTransmissionTime, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractNavigationMessage)[] = {
              { Py_tp_methods, t_AbstractNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractNavigationMessage_init_ },
              { Py_tp_getset, t_AbstractNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractNavigationMessage, t_AbstractNavigationMessage, AbstractNavigationMessage);

            void t_AbstractNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractNavigationMessage), &PY_TYPE_DEF(AbstractNavigationMessage), module, "AbstractNavigationMessage", 0);
            }

            void t_AbstractNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "class_", make_descriptor(AbstractNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "wrapfn_", make_descriptor(t_AbstractNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractNavigationMessage::wrap_Object(AbstractNavigationMessage(((t_AbstractNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractNavigationMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSqrtA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf2", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCic(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCic", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCis(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCis", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrs", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCuc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCuc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCus", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTransmissionTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af2", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCic(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cic", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCis(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cis", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crs", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCuc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cuc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cus", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iDot", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSqrtA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTransmissionTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
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
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Euclidean3D::class$ = NULL;
          jmethodID *Euclidean3D::mids$ = NULL;
          bool Euclidean3D::live$ = false;

          jclass Euclidean3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Euclidean3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_25549d196321d5e7] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/threed/Euclidean3D;");
              mids$[mid_getSubSpace_86b463c8efc90624] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean3D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
          }

          Euclidean3D Euclidean3D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean3D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_25549d196321d5e7]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Euclidean2D Euclidean3D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Euclidean2D(env->callObjectMethod(this$, mids$[mid_getSubSpace_86b463c8efc90624]));
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
          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data);
          static PyGetSetDef t_Euclidean3D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean3D, dimension),
            DECLARE_GET_FIELD(t_Euclidean3D, instance),
            DECLARE_GET_FIELD(t_Euclidean3D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean3D__methods_[] = {
            DECLARE_METHOD(t_Euclidean3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean3D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean3D)[] = {
            { Py_tp_methods, t_Euclidean3D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean3D, t_Euclidean3D, Euclidean3D);

          void t_Euclidean3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean3D), &PY_TYPE_DEF(Euclidean3D), module, "Euclidean3D", 0);
          }

          void t_Euclidean3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "class_", make_descriptor(Euclidean3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "wrapfn_", make_descriptor(t_Euclidean3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean3D::initializeClass, 1)))
              return NULL;
            return t_Euclidean3D::wrap_Object(Euclidean3D(((t_Euclidean3D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type)
          {
            Euclidean3D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Euclidean3D::getInstance());
            return t_Euclidean3D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data)
          {
            Euclidean3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean3D::wrap_Object(value);
          }

          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesRangeModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesRangeModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c8e9682f0daaca68] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesRangeModifier::OnBoardAntennaInterSatellitesRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8e9682f0daaca68, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void OnBoardAntennaInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesRangeModifier_init_(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesRangeModifier, t_OnBoardAntennaInterSatellitesRangeModifier, OnBoardAntennaInterSatellitesRangeModifier);

          void t_OnBoardAntennaInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesRangeModifier), module, "OnBoardAntennaInterSatellitesRangeModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesRangeModifier::wrap_Object(OnBoardAntennaInterSatellitesRangeModifier(((t_OnBoardAntennaInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesRangeModifier_init_(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateVectorFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateVectorFunctionDifferentiator::mids$ = NULL;
        bool UnivariateVectorFunctionDifferentiator::live$ = false;

        jclass UnivariateVectorFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_a60494eeb9105ac5] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction UnivariateVectorFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_a60494eeb9105ac5], a0.this$));
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
        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateVectorFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateVectorFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateVectorFunctionDifferentiator, t_UnivariateVectorFunctionDifferentiator, UnivariateVectorFunctionDifferentiator);

        void t_UnivariateVectorFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateVectorFunctionDifferentiator), &PY_TYPE_DEF(UnivariateVectorFunctionDifferentiator), module, "UnivariateVectorFunctionDifferentiator", 0);
        }

        void t_UnivariateVectorFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "class_", make_descriptor(UnivariateVectorFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateVectorFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateVectorFunctionDifferentiator::wrap_Object(UnivariateVectorFunctionDifferentiator(((t_UnivariateVectorFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Coordinate::class$ = NULL;
        jmethodID *SP3Coordinate::mids$ = NULL;
        bool SP3Coordinate::live$ = false;
        SP3Coordinate *SP3Coordinate::DUMMY = NULL;

        jclass SP3Coordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Coordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9e0665ab96544ff9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDZZZZ)V");
            mids$[mid_getClockAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getClockAccuracy", "()D");
            mids$[mid_getClockCorrection_9981f74b2d109da6] = env->getMethodID(cls, "getClockCorrection", "()D");
            mids$[mid_getClockRateAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getClockRateAccuracy", "()D");
            mids$[mid_getClockRateChange_9981f74b2d109da6] = env->getMethodID(cls, "getClockRateChange", "()D");
            mids$[mid_getPositionAccuracy_032312bdeb3f2f93] = env->getMethodID(cls, "getPositionAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocityAccuracy_032312bdeb3f2f93] = env->getMethodID(cls, "getVelocityAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_hasClockEvent_eee3de00fe971136] = env->getMethodID(cls, "hasClockEvent", "()Z");
            mids$[mid_hasClockPrediction_eee3de00fe971136] = env->getMethodID(cls, "hasClockPrediction", "()Z");
            mids$[mid_hasOrbitManeuverEvent_eee3de00fe971136] = env->getMethodID(cls, "hasOrbitManeuverEvent", "()Z");
            mids$[mid_hasOrbitPrediction_eee3de00fe971136] = env->getMethodID(cls, "hasOrbitPrediction", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DUMMY = new SP3Coordinate(env->getStaticObjectField(cls, "DUMMY", "Lorg/orekit/files/sp3/SP3Coordinate;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Coordinate::SP3Coordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jboolean a9, jboolean a10, jboolean a11, jboolean a12) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9e0665ab96544ff9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble SP3Coordinate::getClockAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockAccuracy_9981f74b2d109da6]);
        }

        jdouble SP3Coordinate::getClockCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockCorrection_9981f74b2d109da6]);
        }

        jdouble SP3Coordinate::getClockRateAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateAccuracy_9981f74b2d109da6]);
        }

        jdouble SP3Coordinate::getClockRateChange() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateChange_9981f74b2d109da6]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getPositionAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionAccuracy_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getVelocityAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityAccuracy_032312bdeb3f2f93]));
        }

        jboolean SP3Coordinate::hasClockEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockEvent_eee3de00fe971136]);
        }

        jboolean SP3Coordinate::hasClockPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockPrediction_eee3de00fe971136]);
        }

        jboolean SP3Coordinate::hasOrbitManeuverEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitManeuverEvent_eee3de00fe971136]);
        }

        jboolean SP3Coordinate::hasOrbitPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitPrediction_eee3de00fe971136]);
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
      namespace sp3 {
        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data);
        static PyGetSetDef t_SP3Coordinate__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Coordinate, clockAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockCorrection),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateChange),
          DECLARE_GET_FIELD(t_SP3Coordinate, positionAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, velocityAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Coordinate__methods_[] = {
          DECLARE_METHOD(t_SP3Coordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, getClockAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockCorrection, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateChange, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getPositionAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getVelocityAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockPrediction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitManeuverEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitPrediction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Coordinate)[] = {
          { Py_tp_methods, t_SP3Coordinate__methods_ },
          { Py_tp_init, (void *) t_SP3Coordinate_init_ },
          { Py_tp_getset, t_SP3Coordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Coordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(SP3Coordinate, t_SP3Coordinate, SP3Coordinate);

        void t_SP3Coordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Coordinate), &PY_TYPE_DEF(SP3Coordinate), module, "SP3Coordinate", 0);
        }

        void t_SP3Coordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "class_", make_descriptor(SP3Coordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "wrapfn_", make_descriptor(t_SP3Coordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Coordinate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "DUMMY", make_descriptor(t_SP3Coordinate::wrap_Object(*SP3Coordinate::DUMMY)));
        }

        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Coordinate::initializeClass, 1)))
            return NULL;
          return t_SP3Coordinate::wrap_Object(SP3Coordinate(((t_SP3Coordinate *) arg)->object.this$));
        }
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Coordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jboolean a9;
          jboolean a10;
          jboolean a11;
          jboolean a12;
          SP3Coordinate object((jobject) NULL);

          if (!parseArgs(args, "kkkkkDDDDZZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
          {
            INT_CALL(object = SP3Coordinate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitManeuverEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldExpandableODE::class$ = NULL;
      jmethodID *FieldExpandableODE::mids$ = NULL;
      bool FieldExpandableODE::live$ = false;

      jclass FieldExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c09c2e5c5515d015] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_9be0f88c04e08445] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/FieldSecondaryODE;)I");
          mids$[mid_computeDerivatives_31586897e81be81c] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMapper_505b2cb84189ee60] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
          mids$[mid_getPrimary_e4af3d5fc3ebdfd4] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;");
          mids$[mid_init_d7702289c8dcf483] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldExpandableODE::FieldExpandableODE(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c09c2e5c5515d015, a0.this$)) {}

      jint FieldExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::FieldSecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_9be0f88c04e08445], a0.this$);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldExpandableODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_31586897e81be81c], a0.this$, a1.this$));
      }

      ::org::hipparchus::ode::FieldEquationsMapper FieldExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::FieldEquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_505b2cb84189ee60]));
      }

      ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation FieldExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_e4af3d5fc3ebdfd4]));
      }

      void FieldExpandableODE::init(const ::org::hipparchus::ode::FieldODEState & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_d7702289c8dcf483], a0.this$, a1.this$);
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
      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args);
      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg);
      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data);
      static PyGetSetDef t_FieldExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldExpandableODE, mapper),
        DECLARE_GET_FIELD(t_FieldExpandableODE, primary),
        DECLARE_GET_FIELD(t_FieldExpandableODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldExpandableODE__methods_[] = {
        DECLARE_METHOD(t_FieldExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_FieldExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldExpandableODE)[] = {
        { Py_tp_methods, t_FieldExpandableODE__methods_ },
        { Py_tp_init, (void *) t_FieldExpandableODE_init_ },
        { Py_tp_getset, t_FieldExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldExpandableODE, t_FieldExpandableODE, FieldExpandableODE);
      PyObject *t_FieldExpandableODE::wrap_Object(const FieldExpandableODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldExpandableODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldExpandableODE), &PY_TYPE_DEF(FieldExpandableODE), module, "FieldExpandableODE", 0);
      }

      void t_FieldExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "class_", make_descriptor(FieldExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "wrapfn_", make_descriptor(t_FieldExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldExpandableODE::initializeClass, 1)))
          return NULL;
        return t_FieldExpandableODE::wrap_Object(FieldExpandableODE(((t_FieldExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
        PyTypeObject **p0;
        FieldExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_))
        {
          INT_CALL(object = FieldExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldSecondaryODE a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldSecondaryODE::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldSecondaryODE::parameters_))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldEquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldODEState a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldEquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(value);
      }

      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_008c28e8fb144fd8] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_8b83c2831e1c2f71] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_1c7d7a6171c9f40b] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_74153d27b77a6dcb] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DDLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_91f4c05bf9eab1a6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a89d7889c8c6100d] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_590831e96331b68b] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_ae2e644072da8e54] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_008c28e8fb144fd8], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8b83c2831e1c2f71], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7eae8d8112e983e4], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8edb355cf7d54cf6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_1c7d7a6171c9f40b], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_74153d27b77a6dcb], a0.this$, a1, a2, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_91f4c05bf9eab1a6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a89d7889c8c6100d], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_590831e96331b68b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7, a8));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ae2e644072da8e54], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7, a8));
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
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);

              static PyMethodDef t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod, t_AbstractShortTermEncounter1DNumerical2DPOCMethod, AbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter1DNumerical2DPOCMethod), module, "AbstractShortTermEncounter1DNumerical2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(AbstractShortTermEncounter1DNumerical2DPOCMethod(((t_AbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a1((jobject) NULL);
                    PyTypeObject **p1;
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1, &p1, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
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
                  break;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    jdouble a2;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a3((jobject) NULL);
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDDkID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a3((jobject) NULL);
                    PyTypeObject **p3;
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 7:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
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
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 9:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a6((jobject) NULL);
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDkID", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a6((jobject) NULL);
                    PyTypeObject **p6;
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKID", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), (PyObject *) self, "compute", args, 2);
              }
            }
          }
        }
      }
    }
  }
}
